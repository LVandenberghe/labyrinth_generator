/*
** EPITECH PROJECT, 2023
** generator
** File description:
** essaie
*/

#include "../include/my.h"

static void free_everything(int **labyrinth, arr_t *info)
{
    for (int i = 0; i != info->max_row; i++) {
        free (labyrinth[i]);
    }
    free (labyrinth);
    free (info);
}

static void final_print(int i, int j, int **labyrinth)
{
    if (labyrinth[i][j] == 0)
        write(1, "X", 1);
    if (labyrinth[i][j] != 0)
        write(1, "*", 1);
}

static void second_print_labyrinth(int **labyrinth, arr_t *info)
{
    for (int i = 0; i != info->max_row; i++) {
        for (int j = 0; j != info->size; j++) {
            final_print(i, j, labyrinth);
        }
        if (i + 1 != info->max_row)
            write(1,"\n",1);
    }
}

static void fill_labyrinth(int **labyrinth, arr_t *info, int i)
{
    for (int j = 0; j < info->size; j++) {
        if (info->row % 2 != 0) {
            labyrinth[i][j] = 0;
        }
        if (j % 2 == 0) {
            labyrinth[i][j] = 1;
        } else {
            labyrinth[i][j] = 0;
        }
    }
}

int unperfect(char **av)
{
    int **labyrinth = malloc(sizeof(int *) * (atoi(av[2]) + 1));
    arr_t *info = malloc(sizeof(arr_t));

    srand(time(0));
    info = get_info(av, info);
    for (int i = 0; i < info->max_row; i += 1) {
        info->row = i;
        labyrinth[i] = malloc(sizeof(int) * info->size);
        fill_labyrinth(labyrinth, info, i);
    }
    labyrinth = transform_labyrinth(labyrinth, info);
    second_print_labyrinth(labyrinth, info);
    free_everything(labyrinth, info);
    return (0);
}
