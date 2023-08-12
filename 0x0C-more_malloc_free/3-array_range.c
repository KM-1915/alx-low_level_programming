#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: smaller integers
 * @max: larger integers
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *ptr, array;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	array = 0;
	while (min <= max)
	{
		ptr[array] = min;
		min++;
		array++;
	}
	return (ptr);
}
