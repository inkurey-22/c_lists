/*
** Théophile "Inkurey22" R.
** C-lists_lib
** File description:
** remove.c
*/

#include "../include/clists.h"

void remove_node(list_t **list, void *data)
{
    list_t *tmp = *list;
    list_t *prev = NULL;

    if (!tmp)
        return;
    /* Those are just comparison examples but you should modify
    ** with the data you want to compare
    **
    ** if (tmp->data == data) {
    **     *list = tmp->next;
    **     free(tmp);
    **     return;
    ** }
    ** while (tmp && tmp->data != data) {
    **     prev = tmp;
    **     tmp = tmp->next;
    ** }
    */
    if (!tmp)
        return;
    prev->next = tmp->next;
    free(tmp);
}
