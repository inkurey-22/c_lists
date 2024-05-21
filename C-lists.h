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
    void *data;
    struct list_s *next;
} list_t;

list_t *create_node(void *data);
void append_node(list_t **list, void *data);
void remove_node(list_t **list, void *data);

#endif
