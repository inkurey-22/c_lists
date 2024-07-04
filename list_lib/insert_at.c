/*
** Théophile "Inkurey22" R.
** C-lists_lib
** File description:
** insert_at.c
*/

#include "lists.h"

/*
**  Inserts a node with the given data at the specified index
*/
void insert_node_at(list_t **list, void *data, int const index)
{
    list_t *node = create_node(data);
    list_t *tmp = *list;
    list_t *prev = NULL;
    int i = 0;

    if (node == NULL)
        return;
    if (tmp == NULL) {
        *list = node;
        return;
    }
    if (index == 0) {
        node->next = tmp;
        *list = node;
        return;
    }
    while (tmp && i < index) {
        prev = tmp;
        tmp = tmp->next;
        i++;
    }
    if (i < index) {
        fprintf(stderr, "Error: index out of range\n");
        free(node);
        return;
    }
    prev->next = node;
    node->next = tmp;
}
