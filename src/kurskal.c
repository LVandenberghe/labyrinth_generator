/*
** EPITECH PROJECT, 2023
** generator
** File description:
** kurskal
*/

#include "../include/my.h"

int **create_way(int **labyrinth, pos_t way, pos_t rdm, arr_t *info)
{
    if (way.x == 1) {
        if (rdm.x + 2 < info->size && rdm.x + 2 != 0)
            labyrinth = replace_cell(labyrinth, rdm, way, info);
        if (rdm.x + 2 > info->size && rdm.x + 2 != 0)
            return labyrinth;
    }
    if (way.x == 0) {
        if (rdm.y + 2 < info->max_row && rdm.y + 2 != 0)
            labyrinth = replace_cell(labyrinth, rdm, way, info);
        if (rdm.y + 2 > info->max_row && rdm.y + 2 != 0)
            return labyrinth;
    }
    return labyrinth;
}

int **kruskal(int **labyrinth, arr_t *info)
{
    pos_t rdm = set_pos(rdm);
    pos_t way = set_pos(way);

    for (; check_if_finished(labyrinth, info) == 1;) {
        rdm = random_pos(rdm, info);
        way = random_dir(way);
        labyrinth = create_way(labyrinth, way, rdm, info);
    }
    return (labyrinth);
}
