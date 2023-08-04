#include "main.h"
#include <stdio.h>
#include<string.h>
/**
 * _islower - checks for lowercase characters
 *@c: character printed
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
