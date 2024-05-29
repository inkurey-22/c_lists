/*
** Théophile "Inkurey22" R.
** C-lists_lib
** File description:
** reverse.c
*/

#include "../C-lists.h"

list_t *reverse_list(list_t *list)
{
    list_t *prev = NULL;
    list_t *next = NULL;

    while (list) {
        next = list->next;
        list->next = prev;
        prev = list;
        list = next;
    }
    return prev;
}
