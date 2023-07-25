#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
	{
		i++;
	}

		for (n = 0; n < i; n += 2)
		{
			_putchar(str[n]);
		}

	_putchar('\n');
}
