#include"function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_name - prints a name.
 * @name: name printed
 * @f: pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
