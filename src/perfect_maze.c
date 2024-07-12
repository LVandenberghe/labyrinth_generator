/*
** EPITECH PROJECT, 2023
** generator
** File description:
** perfect_maze
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

static int change_case(int **labyrinth, arr_t *info, int p, pos_t pos)
{
    if (info->row % 2 != 0) {
        labyrinth[pos.y][pos.x] = 0;
    } else if (pos.x % 2 == 0) {
        labyrinth[pos.y][pos.x] = p;
        p++;
    } else {
        labyrinth[pos.y][pos.x] = 0;
    }
    return p;
}

static int fill_labyrinth(int **labyrinth, arr_t *info, int i, int p)
{
    pos_t pos = set_pos(pos);

    pos.y = i;
    for (int j = 0; j < info->size; j++) {
        pos.x = j;
        p = change_case(labyrinth, info, p, pos);
    }
    return p;
}

int perfect(char **av)
{
    int **labyrinth = malloc(sizeof(int *) * (atoi(av[2]) + 1));
    arr_t *info = malloc(sizeof(arr_t));
    int p = 1;

    srand(time(0));
    info = get_info(av, info);
    for (int i = 0; i < info->max_row; i += 1) {
        info->row = i;
        labyrinth[i] = malloc(sizeof(int) * info->size);
        p = fill_labyrinth(labyrinth, info, i, p);
    }
    labyrinth = kruskal(labyrinth, info);
    if (atoi(av[2]) % 2 == 0)
        labyrinth = change_last_line(labyrinth, info);
    labyrinth[info->max_row - 1][info->size - 1] = 1;
    print_labyrinth(labyrinth, info);
    free_everything(labyrinth, info);
    return (0);
}
