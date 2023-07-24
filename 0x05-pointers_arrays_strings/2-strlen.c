#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	len = strlen(s);
	printf("strlen(s) : %d\n", len);

	return (len);
}
