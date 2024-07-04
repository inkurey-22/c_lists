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
list_t *find_node(list_t *list, void const *ref)
{
    while (list) {
        // As always, this is just a comparison example, you should adapt it
        if (list->data == ref)
            return list;
        list = list->next;
    }
    fprintf(stderr, "Error: no node found\n");
    return NULL;
}
