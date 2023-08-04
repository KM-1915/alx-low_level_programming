#include "main.h"
#include<stdio.h>
/**
 * *_strncat - concatenates two strings
 * @dest: destination of string
 * @src: source of string
 * @n: number of bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src && n > 0)
	{
		*ptr++ = *src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
