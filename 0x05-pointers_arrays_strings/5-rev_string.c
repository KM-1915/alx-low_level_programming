#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i, n = 0;
	char c;

	for (i = 0; s[i] != '\0'; i++)
		n++;
	{
		for (i = n - 1;  i >= n / 2; i--)
		{
			c = s[i];
			s[i] = s[n - i - 1];
			s[n - i - 1] = c;
		}
	}
}
