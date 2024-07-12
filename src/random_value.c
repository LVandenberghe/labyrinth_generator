/*
** EPITECH PROJECT, 2023
** generator
** File description:
** random_value
*/

#include "../include/my.h"

pos_t random_dir(pos_t dir)
{
    dir.x = rand() % 2;
    if (dir.x == 1)
        dir.y = 0;
    else
        dir.y = 1;
    return (dir);
}

pos_t random_pos(pos_t rdm, arr_t *info)
{
    rdm.x = rand() % info->size;
    if (rdm.x % 2 == 1)
        rdm.x -= 1;
    rdm.y = rand() % info->max_row;
    if (rdm.y % 2 == 1)
        rdm.y -= 1;
    return rdm;
}
