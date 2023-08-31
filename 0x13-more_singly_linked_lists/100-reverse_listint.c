#include"lists.h"
#include<stdio.h>
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = next;
	}
	*head = x;
	return (*head);
}
