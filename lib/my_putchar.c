/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** write 1 char
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
