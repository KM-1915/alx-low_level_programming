#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array elements
 * @size: for bytes
 * Return: pointer to the allocated memory
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n = 0, i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = nmemb * size;
	ptr = malloc(i);

	if (ptr == NULL)
		return (NULL);

	while (n < i)
	{
		ptr[n] = 0;
		n++;
	}
	return (ptr);
}
