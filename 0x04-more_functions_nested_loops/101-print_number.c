#include "main.h"
#include<stdio.h>
/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == o)
	{
		_putchar('0');
		n = 0;
	}
	else
	{
		_putchar(n / 10);
		n = n;
	}
	_putchar('\n');
	return (0);
}
