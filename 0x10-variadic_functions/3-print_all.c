#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *str, *any = "";
	int n = 0;
	va_list arg;

	va_start(arg, format);
	if (format)
	{
		while (format[n])
		{
			switch (format[n])
			{
				case 'c':
					printf("%s%c", any, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", any, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", any, va_arg(arg, double));
					break;
				case 's':
					str = va_arg(arg, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", any, str);
					break;
				default:
					n++;
					continue;
			}
			any = ", ";
			n++;
		}
	}
	va_end(arg);
	printf("\n");
}
