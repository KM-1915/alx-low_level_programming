#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int n, i, m;

	for (n = 0; n < 8; n++)
	{
		for (i = n + 1; i < 9; i++)
		{
			for (m = i + 1; m < 10; m++)
			{
				putchar(n + '0');
				putchar(i + '0');
				putchar(m + '0');

				if (n != 7 || i != 8 || m != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
