#include "main.h"
#include<stdio.h>
#include<math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	int i, large;
	long num = 612852475143;
	double square = sqrt(num);

	for (i = 1; i <= square; i++)
	{
		if ((num % i) == 0)
		{
			large = num / i;
		}
	}
	printf("%d\n", large);
	return (0);
}
