/*
** Théophile "Inkurey22" R.
** c_lists
** File description:
** Header file
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
list_t *reverse_list(list_t *list);
list_t *find_node(list_t *list, void const *ref);

int list_size(list_t *list);

void merge_sort(list_t **list);
void add_to_top(list_t **list, void *data);
void append_node(list_t **list, void *data);
void insert_node_at(list_t **list, void *data, int index);
void free_list(list_t **list, void (*free_data)(void *data));
void remove_node(list_t **list, void const *data, void (*free_data)(void *));

#endif
