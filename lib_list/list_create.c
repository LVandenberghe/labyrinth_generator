/*
** EPITECH PROJECT, 2022
** list_create
** File description:
** creates a list
*/

#include "../include/list.h"
#include <stdlib.h>

list_t *list_create(void)
{
    list_t *list = malloc(sizeof(list_t));

    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}
