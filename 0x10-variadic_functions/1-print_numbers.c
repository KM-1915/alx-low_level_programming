#include"variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @*separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *num;
	unsigned int i;
	va_list arg;
	
	if (separator == NULL || *separator == 0)
	{
		num = "";
	}
	else
	{
		num = (char *) separator;
	}

	va_start(arg, n);
	if (n > 0)
	{
		printf("%d", va_arg(arg, int));
	}

	for (i = 1; i < n; i++)
	{
		printf("%s%d", num, va_arg(arg, int));
	}
	printf("\n");
	va_end(arg);
}
