#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
		putchar(n + '0');

	for (n = 0; n < 6; n++)
		putchar('a' + n);

putchar('\n');
return (0);
}
