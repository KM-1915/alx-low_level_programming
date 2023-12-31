#include "main.h"
#include<stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string c comes from
 * @c: character
 * Return: pointer to the first occurrence of the character c in s
 * NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
		{
			return (s);
		}
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
