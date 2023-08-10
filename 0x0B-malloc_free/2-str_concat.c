#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL for empty string
 * or return pointer to new space in memory with s1 contents
 * followed by s2 contents
 */
char *str_concat(char *s1, char *s2)
{
	int n, i, len, len1, len2;
	char *end;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		n = 0;
		while (s1[n++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		n = 0;
		while (s2[n++] != '\0')
			len2++;
	}
	len = len1 + len2;
	end = (char *)malloc(sizeof(char) * (len + 1));
	if (end == NULL)
		return (NULL);

	for (n = 0; n < len1; n++)
		end[n] = s1[n];
	for (i = 0; i < len2; i++, n++)
		end[n] = s2[i];
	end[len] = '\0';

	return (end);
}
