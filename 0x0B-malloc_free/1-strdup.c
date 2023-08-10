#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: NULL if str = NULL or insufficient memory was available
 * returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dups;
	int n, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dups = (char *)malloc((sizeof(char) * len) + 1);
	if (dups == NULL)
		return (NULL);

	for (n = 0; n < len; n++)
		dups[n] = str[n];
	dups[len] = '\0';

	return (dups);
}
