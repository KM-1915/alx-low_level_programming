#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int nn, ni;

	for (nn = 0; nn < 98; nn++)
	{
		for (ni = nn + 1; ni < 99; ni++)
		{
			putchar((nn / 10) + '0');
			putchar(nn + '0');
			putchar(' ');
			putchar((ni / 10) + '0');
			putchar(ni + '0');

			if (nn != 98 || ni != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
