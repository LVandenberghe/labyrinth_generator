/*
** EPITECH PROJECT, 2023
** generator
** File description:
** replacement_function
*/

#include "../include/my.h"

int **special_case(int **labyrinth, pos_t rdm, pos_t way, arr_t *info)
{
    if (way.x == 1 && rdm.x + 1 > info->size) {
        labyrinth[rdm.y][rdm.x + 1] = labyrinth[rdm.y][rdm.x];
    }
    if (way.x == 0 && rdm.y + 1 > info->max_row) {
        labyrinth[rdm.y + 1][rdm.x] = labyrinth[rdm.y][rdm.x];
    }
    return labyrinth;
}

int **lgr(int **labyrinth, value_t value, int i, int j)
{
    if (labyrinth[i][j] == value.to_replace)
        labyrinth[i][j] = value.replacement;
    return labyrinth;
}

int **lsf(int **labyrinth, arr_t *info, value_t value)
{
    for (int i = 0; i != info->max_row; i++) {
        for (int j = 0; j != info->size; j++) {
            labyrinth = lgr(labyrinth, value, i, j);
        }
    }
    return labyrinth;
}

int **replace_cell(int **labyrinth, pos_t rdm, pos_t way, arr_t *info)
{
    value_t value = set_value(value);

    if (way.x == 1) {
        value = fill_value(value, labyrinth, rdm, way);
        if (value.replacement == value.to_replace || value.replacement == 0
        || value.to_replace == 0)
            return labyrinth;
        labyrinth[rdm.y][rdm.x + 1] = labyrinth[rdm.y][rdm.x];
        labyrinth = lsf(labyrinth, info, value);
    }
    if (way.x == 0) {
        value = fill_value(value, labyrinth, rdm, way);
        if (value.replacement == value.to_replace || value.replacement == 0
        || value.to_replace == 0)
            return labyrinth;
        labyrinth[rdm.y + 1][rdm.x] = labyrinth[rdm.y][rdm.x];
        labyrinth = lsf(labyrinth, info, value);
    }
    return labyrinth;
}

int **change_last_line(int **labyrinth, arr_t *info)
{
    for (int i = 0; i != info->size; i++) {
        if (labyrinth[info->max_row - 2][i] == 0)
            labyrinth[info->max_row - 1][i - 1] = 1;
    }
    return labyrinth;
}
