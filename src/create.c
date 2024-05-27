/*
** Théophile "Inkurey22" R.
** C-lists_lib
** File description:
** create.c
*/

#include "../C-lists.h"

list_t *create_node(int data)
{
    list_t *node = malloc(sizeof(list_t));

    if (!node){
        fprintf(stderr, "Error: node memory allocation failed\n");
    }
    node->data = data;
    node->next = NULL;
    return node;
}
