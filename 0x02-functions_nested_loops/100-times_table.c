#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number printed
 * Return: void
 */
void print_times_table(int n)
{
	int i, x, y;

	if (n >= 0 && n <= 14)
	{
		for (i = 0; i <= n; i++)
		{
			for (x = 0; x <= n; x++)
			{
				y = i * x;
				if (i > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((y / 100) + '0');
					_putchar(((y / 10) % 10) + '0');
					_putchar((y % 10) + '0');
				}
				else if (y > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((y / 10) % 10) + '0');
					_putchar((y % 10) + '0');
				}
				else
				{
					if (x != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(y + '0');
				}
			}
			_putchar('\n');
		}
	}
}
