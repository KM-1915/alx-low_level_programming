#include<stdio.h>
/**
 * main - prints the sum of the even-valued terms
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long n = 1, m = 2, sum = m;

	while (n + m <= 4000000)
	{
		m += n;

		if (m % 2 == 0)
			sum += m;

		n = m - n;

		++i;
	}
	printf("%d\n", sum);
	return (0);
}
