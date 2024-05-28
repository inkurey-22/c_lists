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

/*
** The structure, and especially its data
** is just an example. You should modify it
** to fit your needs.
**
** The same applies for the functions below,
** you should modify the comparisons and the
** data type to fit your needs.
*/

typedef struct list_s {
    void *data;
    struct list_s *next;
} list_t;

list_t *create_node(void *data);
void append_node(list_t **list, void *data);
void remove_node(list_t **list, void *data, void (*free_data)(void *data));
void merge_sort(list_t **list);

#endif
