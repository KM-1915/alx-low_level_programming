#include"lists.h"
#include<stdio.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head node
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *y;

	y = *head;
	y = malloc(sizeof(listint_t));
	if (y == NULL)
		return (NULL);
	y->n = n;
	y->next = *head;
	*head = y;
	return (*head);
}
