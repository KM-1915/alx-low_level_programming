#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previous allocated with
 * a call to malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n;

	if (new_size > old_size)
	{
		n = malloc(new_size);
		free(ptr);
		return (n);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		n = malloc(new_size);
		free(ptr);
		return (n);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
