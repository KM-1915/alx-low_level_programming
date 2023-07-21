#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer about to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		n *= -1;
		i = n;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((i % 10) + '0');
}
