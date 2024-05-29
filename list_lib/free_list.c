/*
** Théophile "Inkurey22" R.
** C-lists_lib
** File description:
** free_list.c
*/

#include "../include/C-lists.h"

void free_list(list_t **list, void (*free_data)(void *data))
{
    list_t *tmp = *list;
    list_t *next;

    while (tmp) {
        next = tmp->next;
        free_data(tmp->data);
        free(tmp);
        tmp = next;
    }
    *list = NULL;
}
