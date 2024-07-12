/*
** EPITECH PROJECT, 2023
** B-CPE-200-REN-2-1-dante-ludwig.vandenberghe
** File description:
** lib
*/

#ifndef LIB_H_
    #define LIB_H_
    #include <unistd.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <stdbool.h>
    #include <sys/stat.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <signal.h>
    #include <sys/wait.h>

    void my_putchar(char c);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_put_nbr(int nb);
    int mini_printf(char const *format, ...);
    char **str_to_word_array(char *str, char delim);
    char *my_strcpy_m(char const *str, unsigned int n);
    char *my_strcpy (char *dest, char const *src);
    char *my_strncpy (char *dest, char const *src, unsigned int n);
    char *clean_str(char *str);
    char *my_strdup(char const *str);
    int my_getnbr(char const *str);
    bool my_strcmp(char *to_comp, char *comp);
    char *my_strcat(char *dest, char const *src);
    int args(char **av);

#endif /* !LIB_H_ */
