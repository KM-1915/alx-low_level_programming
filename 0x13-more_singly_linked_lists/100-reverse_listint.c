#include"lists.h"
#include<stdio.h>
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL;
	listint_t *n = *head;

	for (; i != NULL; i = i->next)
	{
		listint_t *next = i->next;
		i->next = x;
		x = i;
	}
	*head = x;
	return (*head);
}
