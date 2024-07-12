/*
** EPITECH PROJECT, 2023
** generator
** File description:
** print_labyrinth
*/

#include "../include/my.h"

static void final_print(int i, int j, int **labyrinth)
{
    if (labyrinth[i][j] == 0)
        write(1, "X", 1);
    if (labyrinth[i][j] != 0)
        write(1, "*", 1);
}

void print_labyrinth(int **labyrinth, arr_t *info)
{
    for (int i = 0; i != info->max_row; i++) {
        for (int j = 0; j != info->size; j++) {
            final_print(i, j, labyrinth);
        }
        if (i + 1 != info->max_row)
            write(1,"\n",1);
    }
}
