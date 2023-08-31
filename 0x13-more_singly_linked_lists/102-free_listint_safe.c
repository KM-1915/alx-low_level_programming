#include"lists.h"
#include<stdio.h>
/**
 * free_listint_safe - frees a listint_t list
 * @h: element
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	int z;
	size_t leng = 0;
	listint_t *m;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		z = *h - (*h)->next;
		if (z > 0)
		{
			m = (*h)->next;
			free(*h);
			*h = m;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}
	*h = NULL;
	return (leng);
}
