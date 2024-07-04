/*
** Théophile "Inkurey22" R.
** C-lists_lib
** File description:
** size.c
*/

#include "lists.h"

/*
**  Returns the size of the list
*/
int list_size(list_t *list)
{
    int size = 0;

    while (list) {
        size++;
        list = list->next;
    }
    return size;
}
