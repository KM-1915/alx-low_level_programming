#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (m = 0; m < i; m++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
