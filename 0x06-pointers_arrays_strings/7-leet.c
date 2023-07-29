#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * *leet - encodes a string into 1337
 * @p: string
 * Return: capitalized string
 */
char *leet(char *p)
{
	int a, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; p[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (p[a] == s1[b])
			{
				p[a] = s2[b];
			}
		}
	}
	return (p);
}
