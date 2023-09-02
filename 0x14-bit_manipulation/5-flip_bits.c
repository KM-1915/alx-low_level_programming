#include"main.h"
#include<stdio.h>
/**
 * flip_bits - flip bits to get one number from another
 * @n: integer
 * @m: integer
 * Return: number of bits you would need to flip
 * to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}
	return (i);
}
