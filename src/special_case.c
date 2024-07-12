/*
** EPITECH PROJECT, 2023
** generator
** File description:
** special_case
*/

#include "../include/my.h"

void check_special_case_parameter_row(char **av)
{
    for (int i = 0; i != atoi(av[1]); i++ ) {
        write(1,"*",1);
    }
}

void check_special_case_parameter_line(char **av)
{
    for (int i = 0; i != atoi(av[2]); i++ ) {
        write(1,"*",1);
        if (atoi(av[2]) - 1 != i)
            write(1,"\n",1);
    }
}
