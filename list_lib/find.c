/*
** Théophile "Inkurey22" R.
** C-lists_lib
** File description:
** find.c
*/

#include "lists.h"

/*
**  Finds a node in the list with the given reference
*/
list_t *find_node(list_t *list, void const *ref,
    int (*cmp)(void const *data, void const *ref))
{
    while (list) {
        if (cmp(list->data, ref) == 0)
            return list;
        list = list->next;
    }
    dprintf(2, "Error: no node found\n");
    return NULL;
}
