#include "main.h"
#include<stdio.h>
/**
 * factorial - prints the factorial of a given number
 * @n: number
 * Return: factorial, if n < 0 return -1 (error)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
