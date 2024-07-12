/*
** EPITECH PROJECT, 2021
** str cmmp
** File description:
** on compare des str et on return un nombre
*/

#include "../include/my.h"

bool my_strcmp(char *to_comp, char *comp)
{
    int len_comp = my_strlen(comp);
    int len_to_comp = my_strlen(to_comp);

    if (comp[len_comp - 1] == '\n')
        len_comp -= 1;
    if (len_to_comp != len_comp)
        return false;
    for (int i = 0; i < len_comp; i++) {
        if (to_comp[i] != comp[i])
            return false;
    }
    return true;
}
