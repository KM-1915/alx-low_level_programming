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
	int num;
	unsigned int i;
	va_list arg;
	
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		printf("%d", num);
		
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
