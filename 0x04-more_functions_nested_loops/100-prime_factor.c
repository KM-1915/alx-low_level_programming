#include "main.h"
#include<stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	int i, large;
	long num = 612852475143;

	for (i = 1; i <= sqrt(num); i++)
	{
		if ((num % i) == 0)
		{
			large = num / i;
		}
	}
	_putchar("%d\n", large);
	return (0);
}
