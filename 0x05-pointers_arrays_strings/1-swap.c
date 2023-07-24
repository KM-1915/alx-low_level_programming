#include "main.h"
#include<stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: integer being swapped
 * @b: integer being swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
