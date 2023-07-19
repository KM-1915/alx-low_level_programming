#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int t, i, m, e;

	for (t = 0; t <= 2; t++)
	{
		for (i = 0; i <= 9; i++)
		{
			if ((t <= 1 && i <= 9) || (t <= 2 && i <= 3))
			{
				for (m = 0; m <= 5; m++)
				{
					for (e = 0; e <= 9; e++)
					{
						_putchar(t + '0');
						_putchar(i + '0');
						_putchar(':');
						_putchar(m + '0');
						_putchar(e + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
