/*
** EPITECH PROJECT, 2022
** liste chainée
** File description:
** list
*/

#include <stdlib.h>

#ifndef LIST_H_
    #define LIST_H_

typedef struct list_node_s {
    void *value;
    struct list_node_s *next;
    struct list_node_s *prev;
} list_node_t;

typedef struct list_s {
    list_node_t *head;
    list_node_t *tail;
    unsigned int size;
} list_t;

list_t *list_create(void);
unsigned int list_add(list_t *list, void *value);
void *list_get(list_t *list, unsigned int index);
list_node_t *list_get_node(list_t *list, unsigned int index);
void list_remove(list_t *list, unsigned int index);
void swap_list(list_t *list, int index1, int index2);
void first_to_last(list_t *list, int index1);
void last_to_first(list_t *list, int index1);
void switch_list(list_t *alist, list_t *blist);
void swap_a(list_t *a_list);
void swap_b(list_t *b_list);
void rotate_a(list_t *a_list);
void rotate_b(list_t *b_list);
void derotate_a(list_t *a_list);
void derotate_b(list_t *b_list);
void pass_a_to_b(list_t *a_list, list_t *b_list);
void pass_b_to_a(list_t *b_list, list_t *a_list);

#endif /* !LIST_H_ */
