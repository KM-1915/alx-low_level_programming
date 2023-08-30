#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: elemens
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
