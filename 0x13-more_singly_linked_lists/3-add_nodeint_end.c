#include"lists.h"
#include<stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head node
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *y = malloc(sizeof(listint_t));
	listint_t *i;

	if (y == NULL)
		return (NULL);
	y->n = n;
	y->next = NULL;

	if (*head == NULL)
	{
		*head = y;
		return (*head);
	}
	i = *head;
	while (i->next != NULL)
		i = i->next;
	i->next = y;
	return (*head);
}
