/*
** Théophile "Inkurey22" R.
** C-lists_lib
** File description:
** append.c
*/

#include "lists.h"

void append_node(list_t **list, void *data)
{
    list_t *node = create_node(data);
    list_t *tmp = *list;

    if (node == NULL)
        return;
    if (*list == NULL) {
        *list = node;
        return;
    }
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = node;
}
