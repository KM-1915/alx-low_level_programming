#include "main.h"
#include<stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: primary string
 * @accept: substring
 * Return: number of bytes in the initial segment of s, from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, n;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (n = 0; accept[n] != '\0'; n++)
			{
				if (s[i] == accept[n])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
