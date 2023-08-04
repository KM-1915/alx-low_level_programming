#include "main.h"
#include<stdio.h>
/**
 * *_strstr - locates a substring
 * @haystack: in this substring
 * @needle: finds first occurrence of this substring
 * Return: pointer to the beginning of the located substring
 * NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int n = 0;

	while (needle[n] != '\0')
		n++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != n)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
