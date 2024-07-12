/*
** EPITECH PROJECT, 2022
** my
** File description:
** header
*/

#ifndef MY
    #define MY
    #include "../include/lib.h"
    #include "../include/list.h"
    #include <time.h>
    #include <string.h>

    typedef struct pos_s {
        int x;
        int y;
    } pos_t;

    typedef struct value_s {
        int to_replace;
        int replacement;
    } value_t;

    typedef struct arr_s {
        int size;
        int row;
        int max_row;
    } arr_t;

    pos_t set_pos(pos_t pos);
    arr_t *get_info(char **av, arr_t *info);
    int **kruskal(int **labyrinth, arr_t *info);
    int **transform_labyrinth(int **labyrinth, arr_t *info);
    value_t set_value(value_t value);
    int unperfect(char **av);
    void check_special_case_parameter_line(char **av);
    void check_special_case_parameter_row(char **av);
    int **change_last_line(int **labyrinth, arr_t *info);
    void print_labyrinth(int **labyrinth, arr_t *info);
    int perfect(char **av);
    pos_t random_dir(pos_t dir);
    pos_t random_pos(pos_t rdm, arr_t *info);
    int check_value(int **labyrinth, arr_t *info, int i, int ref);
    int check_if_finished(int **labyrinth, arr_t *info);
    value_t fill_value(value_t value, int **labyrinth, pos_t rdm, pos_t way);
    int **special_case(int **labyrinth, pos_t rdm, pos_t way, arr_t *info);
    int **lgr(int **labyrinth, value_t value, int i, int j);
    int **lsf(int **labyrinth, arr_t *info, value_t value);
    int **replace_cell(int **labyrinth, pos_t rdm, pos_t way, arr_t *info);

#endif
