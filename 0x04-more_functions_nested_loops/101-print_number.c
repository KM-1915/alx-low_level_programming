#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer about to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	else
	{
		i = n;
	}

	_putchar((i % 10) + '0');
}
