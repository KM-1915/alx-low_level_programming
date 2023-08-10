#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *create_array - creates an array of chars
 * @c: charaters
 * @size: size of character
 * Return: NULL if size is 0 or it fails, else pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int n;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		arr[n] = c;

	return (arr);
}
