#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int n;
	char alph;

	for (n = 0; n <= 10; n++)
		putchar(n);

	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);

putchar('\n');
return (0);
}
