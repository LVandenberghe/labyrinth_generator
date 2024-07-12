/*
** EPITECH PROJECT, 2023
** B-CPE-200-REN-2-1-dante-ludwig.vandenberghe
** File description:
** fill_struct
*/

#include "../include/my.h"

pos_t set_pos(pos_t pos)
{
    pos.x = 0;
    pos.y = 0;
    return (pos);
}

value_t set_value(value_t value)
{
    value.replacement = 0;
    value.to_replace = 0;
    return (value);
}

arr_t *get_info(char **av, arr_t *info)
{
    info->max_row = atoi(av[2]);
    info->size = atoi(av[1]);
    return (info);
}

value_t fill_value(value_t value, int **labyrinth, pos_t rdm, pos_t way)
{
    if (way.x == 1) {
        value.to_replace = labyrinth[rdm.y][rdm.x + 2];
        value.replacement = labyrinth[rdm.y][rdm.x];
    }
    if (way.x == 0) {
        value.to_replace = labyrinth[rdm.y + 2][rdm.x];
        value.replacement = labyrinth[rdm.y][rdm.x];
    }
    return value;
}
