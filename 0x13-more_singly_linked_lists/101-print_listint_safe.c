#include"lists.h"
#include<stdio.h>
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: headnode
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head ,*fast = head;
	size_t e = 0;
	int lp = 0;

	while (slow && fast && fast->next)
	{
		if (!(fast->next->next))
			break;
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = slow->next;
			lp = 1;
			break;
		}
	}
	if (!lp)
	{
		while (head)
		{
			e++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (e);
	}
	while (head)
	{
		e++;
		if (head == slow)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}
