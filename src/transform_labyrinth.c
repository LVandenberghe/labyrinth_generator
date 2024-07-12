/*
** EPITECH PROJECT, 2023
** generator
** File description:
** transform_labyrinth
*/

#include "../include/my.h"

int coin_flip(int **labyrinth, arr_t *info, int j, pos_t pos)
{
    int coinflip = rand() % 2;

    if (coinflip == 1 && pos.x + 1 != info->size && pos.x != info->size) {
        labyrinth[pos.y][pos.x + 1] = 1;
    } else if (coinflip != 1 && pos.y + 1 != info->max_row) {
        labyrinth[pos.y + 1][pos.x] = 1;
    }
    if (j + 1 != info->size)
        j++;
    return j;
}

int **transform_labyrinth(int **labyrinth, arr_t *info)
{
    pos_t pos = set_pos(pos);

    for (int i = 0; i != info->max_row; i++) {
        pos.y = i;
        for (int j = 0; j != info->size; j++) {
            pos.x = j;
            coin_flip(labyrinth, info, j, pos);
        }
        if (i + 1 != info->max_row)
            i++;
    }
    labyrinth[info->max_row - 1][info->size - 1] = 1;
    labyrinth[info->max_row - 1][info->size - 2] = 1;
    labyrinth[info->max_row - 2][info->size - 1] = 1;
    labyrinth[0][1] = 1;
    labyrinth[1][0] = 1;
    return labyrinth;
}
