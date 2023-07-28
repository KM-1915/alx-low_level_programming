#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string pointer
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
