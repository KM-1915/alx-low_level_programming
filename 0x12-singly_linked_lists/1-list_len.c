#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * list_len -  returns the number of elements in a linked list_t list
 * @h: elements
 * Return:  number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
    size_t num = 0;
    const list_t *elm = h;

    while (elm != NULL)
    {
        num++;
        elm = elm->next;
    }
    return (num);
}
