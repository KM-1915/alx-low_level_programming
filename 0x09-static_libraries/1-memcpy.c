#include "main.h"
#include<stdio.h>
/**
 * *_memcpy - copies memory area
 * @dest: memory area copied to
 * @src: memory area copied from
 * @n: copied bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
