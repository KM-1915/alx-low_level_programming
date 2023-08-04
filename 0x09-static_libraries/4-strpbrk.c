#include "main.h"
#include<stdio.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string set is from
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * NULL if no byte if found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);
		s++;
	}
	return (NULL);
}
