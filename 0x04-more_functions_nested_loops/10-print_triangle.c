#include "main.h"
/**
 * print_triangle - print_triangle
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, m, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (m = size - i; m > 1; m--)
			{
				_putchar(' ');
			}
			for (x = 0; x <= i; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
