#include"main.h"
#include<stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i;

	if (!b || !*b)
		return (0);

	i = n = 0;
	while (b[n])
	{
		if (b[n] > '1')
			return (0);
		else if (b[n] == '1')
		{
			i <<= 1;
			i += 1;
		}
		else
			i <<= 1;
		n++;
	}
	return (i);
}
