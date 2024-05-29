/*
** Théophile "Inkurey22" R.
** C-lists_lib
** File description:
** append.c
*/

#include "../C-lists.h"

void append_node(list_t **list, void *data)
{
    list_t *node = create_node(data);
    list_t *tmp = *list;

    if (!node)
        return;
    if (!tmp) {
        *list = node;
        return;
    }
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = node;
}
