#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: integer
 * Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list pars;

	va_start(pars, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(pars, int);
	}
	va_end(pars);
	return (sum);
}
