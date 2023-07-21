#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	else if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
