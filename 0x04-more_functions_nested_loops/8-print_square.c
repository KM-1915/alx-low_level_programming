#include "main.h"
/**
 * print_square - prints a square
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	int i, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i= 0; i < size; i++)
		{
			for (m= 0; m < size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
