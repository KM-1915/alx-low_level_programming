#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int n, i, m, e, t;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			m = n * i;
			{
				if (m > 9)
				{
					e = m % 10;
					t = (m - e) / 10;

					_putchar(',');
					_putchar(' ');
					_putchar(e + '0');
					_putchar(t + '0');
				}
				else
					if (n != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
