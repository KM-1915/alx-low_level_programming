#include"lists.h"
#include<stdio.h>
/**
 * free_listint2 -  frees a listint_t list
 * @head: head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *m, *i;

	if (head == NULL)
		return;

	i = *head;
	while (i != NULL)
	{
		m = i;
		i = i->next;
		free(m);
	}
	*head = NULL;
}
