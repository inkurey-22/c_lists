/*
** Théophile "Inkurey22" R.
** C-lists_lib
** File description:
** sort.c
*/

#include "lists.h"


/*
** Merge two sorted lists
** How it works: Compare the first element of each list, add the smallest to the result list
** and call the function again with the next element of the list that had the smallest element
*/
list_t* sorted_merge(list_t* a, list_t* b)
{
    list_t* result = NULL;

    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    // Same as remove.c, you should modify the following lines with what your data actually is
    if (a->data <= b->data) {
        result = a;
        result->next = sorted_merge(a->next, b);
    }
    else {
        result = b;
        result->next = sorted_merge(a, b->next);
    }
    return result;
}

/*
**  Split the list in two parts
**  How it works: slow pointer moves one step at a time, fast pointer moves two steps at a time
*/
void split(list_t* src, list_t** front, list_t** back)
{
    list_t* slow = src;
    list_t* fast = src->next;

    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    *front = src;
    *back = slow->next;
    slow->next = NULL;
}

/*
**  Merge sort algorithm
**  How it works: split the list in two parts, sort each part and merge them back together
*/
void merge_sort(list_t** list)
{
    list_t* head = *list;
    list_t* a;
    list_t* b;

    if (head == NULL || head->next == NULL)
        return;
    split(head, &a, &b);
    merge_sort(&a);
    merge_sort(&b);
    *list = sorted_merge(a, b);
}
