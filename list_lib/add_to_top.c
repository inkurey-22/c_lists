/*
** EPITECH PROJECT, 2024
** C-lists_lib
** File description:
** add_to_top.c
*/

#include "lists.h"

void add_to_top(list_t **list, void *data)
{
    list_t *node = malloc(sizeof(list_t));

    if (!node)
        return;
    node->data = data;
    node->next = *list;
    *list = node;
}
