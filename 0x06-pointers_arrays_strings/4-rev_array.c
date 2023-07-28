#include "main.h"
#include<stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	 int x = 0;
	 int y = n - 1;
	 int temp;

	for (; x < y; x++, y--)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
	}
}
