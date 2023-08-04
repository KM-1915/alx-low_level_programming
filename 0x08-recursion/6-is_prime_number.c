#include"main.h"
#include<stdio.h>
/**
 * find_multipliers - find multiples of
 * @n: main number
 * @n1: iterate number
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
int find_multipliers(int n, int n1)
{
	if (n1 == n)
	{
		return (1);
	}
	if ((n % n1) == 0)
	{
		return (0);
	}
	else
	{
		return (find_multipliers(n, n1 + 1));
	}
}
/**
 * is_prime_number - check if n is prime number or not
 * @n: main number
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (find_multipliers(n, 2));
}
