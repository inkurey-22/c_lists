/*
** Théophile "Inkurey22" R.
** C-lists_lib
** File description:
** remove.c
*/

#include "../C-lists.h"

/*
** void (*free_data)(void *data) is a function pointer
** that will be used to free the data of the node
**
** It's up to you to implement this function
*/

void remove_node(list_t **list, void *data, void (*free_data)(void *data))
{
    list_t *tmp = *list;
    list_t *prev = NULL;

    if (!tmp)
        return;
    // The following lines are comparison examples that you should modify with what your data actually is
    if (tmp->data == data) {
        *list = tmp->next;
        free_data(tmp->data);
        free(tmp);
        return;
    }
    while (tmp && tmp->data != data) {
        prev = tmp;
        tmp = tmp->next;
    }
    if (!tmp)
        return;
    prev->next = tmp->next;
    free_data(tmp->data);
    free(tmp);
}
