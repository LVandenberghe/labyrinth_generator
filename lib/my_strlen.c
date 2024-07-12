/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** returns the number of char in a str
*/

#include "../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;
    int len = 0;
    while (str[i] != '\0'){
        len += 1;
        i++;
    }
    return len;
}
