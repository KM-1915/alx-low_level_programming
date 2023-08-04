#include "main.h"
#include<stdio.h>
/**
 * _isalpha - checks for alphabetic character
 * @c: character printed
 * Return: 1 if c is a letter (lower- or uppercase), otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
