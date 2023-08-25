#include"lists.h"
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list - frees a list_t list
 * @head: head node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *elm = head;
	list_t *next;

	while (elm != NULL)
	{
		next = elm->next;
		free(elm->str);
		free(elm);
		elm = next;
	}
}
