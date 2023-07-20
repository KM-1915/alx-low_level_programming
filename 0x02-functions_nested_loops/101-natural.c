#include<stdio.h>
/**
 * main - sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int n, i = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			i += n;
		}
		n++;
	}

	putchar("%d\n", i);
	return (0);
}
