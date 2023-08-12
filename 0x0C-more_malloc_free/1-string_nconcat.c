#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 * Return: pointer a new allocated space in memory, which contains s1
 * followed by the first n bytes of s2, and null terminated
 * NULL if it fails and string is empty
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, m = 0, x = 0, y = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[x])
		x++;
	if (n >= x)
		y = i + x;
	else
		y = i + n;

	str = malloc(sizeof(char) * y + 1);
	if (str == NULL)
		return (NULL);

	x = 0;
	while (m < y)
	{
		if (m <= i)
			str[m] = s1[m];
		if (m >= i)
		{
			str[m] = s2[x];
			x++;
		}
		m++;
	}
	str[m] = '\0';
	return (str);
}
