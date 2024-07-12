/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** mini_printf
*/

#include "../include/my.h"

void second_actions(char const *str, int i, va_list args)
{
    switch (str[i + 1]) {
        case 's':
            my_putstr(va_arg(args, char *));
            break;
        default:
            my_putchar('%');
            my_putchar(str[i + 1]);
            break;
    }
}

void get_actions(char const *str, int i, va_list args)
{
    switch (str[i + 1]) {
        case 'i':
            my_put_nbr(va_arg(args, int));
            break;
        case '%':
            my_putchar('%');
            break;
        case 'c':
            my_putchar(va_arg(args, int));
            break;
        case 'd':
            my_put_nbr(va_arg(args, int));
            break;
        default:
            second_actions(str, i, args);
            break;
    }
}

int mini_printf(char const *format, ...)
{
    va_list args;

    va_start (args, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            get_actions(format, i, args);
            i++;
        } else
            my_putchar(format[i]);
    }
    return 0;
}
