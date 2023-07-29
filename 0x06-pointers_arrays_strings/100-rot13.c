#include "main.h"
#include<stdio.h>
/**
 * *rot13 - encodes a string using rot 13
 * @s: string
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	int n;
	int i;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; s[n] != '\0'; n++)
	{
		for (i = 0; i < 52; i++)
		{
			if (s[n] == data1[i])
			{
				s[n] = data2[i];
				;
			}
		}
	}
	return (s);
}
