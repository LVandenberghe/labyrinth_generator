/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** displays the number given as a parameter
*/

#include "../include/my.h"

int my_put_nbr(int nb)
{
    char first;
    int i;

    if (nb >= 0 && nb < 10){
        my_putchar(nb + 48);
    } else if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
        my_put_nbr(nb);
    } else {
        i = nb % 10;
        nb = nb / 10;
        first = i + 48;
        my_put_nbr(nb);
        my_putchar(first);
    }
    return 0;
}
