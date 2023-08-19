#include"function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * array_iterator - executes function given as parameter: elements of array
 * @array: an array
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n = 0;

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
