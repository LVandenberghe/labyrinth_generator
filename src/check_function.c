/*
** EPITECH PROJECT, 2023
** generator
** File description:
** check_function
*/

#include "../include/my.h"

int check_value(int **labyrinth, arr_t *info, int i, int ref)
{
    for (int j = 0; j != info->size; j++) {
        if (labyrinth[i][j] != 0
        && labyrinth[i][j] != ref && labyrinth[i][j] != -1) {
            return 1;
        }
    }
    return 0;
}

int check_if_finished(int **labyrinth, arr_t *info)
{
    int ref = labyrinth[0][0];
    for (int i = 0; i != info->max_row; i++) {
        if (check_value(labyrinth, info, i, ref) == 1)
            return 1;
    }
    return 0;
}
