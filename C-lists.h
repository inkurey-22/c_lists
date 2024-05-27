/*
** Théophile "Inkurey22" R.
** C-lists_lib
** File description:
** C-lists.h
*/

#ifndef CLISTS_H
    #define CLISTS_H

#include <stdlib.h>
#include <stdio.h>

typedef struct list_s {
    int data;
    struct list_s *next;
} list_t;

list_t *create_node(int data);
void append_node(list_t **list, int data);
void remove_node(list_t **list, int data);
void merge_sort(list_t **list);

#endif
