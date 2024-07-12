/*
** EPITECH PROJECT, 2023
** generator
** File description:
** generator
*/

#include "../include/my.h"

void check_perfect(char **av)
{
    if (atoi(av[1]) == 1)
        check_special_case_parameter_line(av);
    else if (atoi(av[2]) == 1)
        check_special_case_parameter_row(av);
    else
        perfect(av);
}

void check_unperfect(char **av)
{
    if (atoi(av[1]) == 1)
        check_special_case_parameter_line(av);
    else if (atoi(av[2]) == 1)
        check_special_case_parameter_row(av);
    else
        unperfect(av);
}

int main(int ac, char **av)
{
    if (ac < 3 && ac > 4)
        return (84);
    if (atoi(av[1]) == 0 || atoi(av[2]) == 0)
        return 84;
    if (ac == 3) {
        check_unperfect(av);
        return 0;
    }
    if (ac == 4 && strcmp(av[3], "perfect") == 0) {
        check_perfect(av);
        return 0;
    }
    return (0);
}
