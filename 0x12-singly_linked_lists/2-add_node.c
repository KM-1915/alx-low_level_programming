#include"lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: head node
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node_a;

	if (str == NULL)
	{
		return (NULL);
	}
	node_a = malloc(sizeof(list_t));
	if (node_a == NULL)
	{
		return (NULL);
	}
	node_a->str = strdup(str);
	if (node_a->str == NULL)
	{
		free(node_a);
		return (NULL);
	}
	node_a->next = *head;
	*head = node_a;
	return (node_a);
}
