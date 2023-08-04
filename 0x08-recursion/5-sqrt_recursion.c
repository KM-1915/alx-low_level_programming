#include"main.h"
#include<stdio.h>
/**
 * _sqrt - calculates sqare root
 * @n: number
 * @n1: iterate number
 * Return: natural square root of the number
 */
int _sqrt(int n, int n1)
{
	int sqrt = n1 * n1;

	if (sqrt > n)
	{
		return (-1);
	}

	if (sqrt == n)
	{
		return (n1);
	}
	return (_sqrt(n, n1 + 1));
}
/**
 * _sqrt_recursion - prints natural square root of a number
 * @n: number
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
