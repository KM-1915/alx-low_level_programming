#include"variadic_functions.h"
#include<stdarg.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *strs;
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		{
			strs = va_arg(arg, char *);
		}
		if (strs == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strs);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
