#include "main.h"
#include<stdio.h>
#include <stdlib.h>
/**
 * _atoi - convert a string to an integer
 * @s: the string being converted
 * Return: If there are no numbers in the string, return 0
 */
int _atoi(char *s)
{
	int i = 0, n = 1, x = 0;
	unsigned int num = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			n *= -1;
		}
		while (s[i] >= '0' && s[i] <= '9')
		{
			x = 1;
			num = (num * 10) + (s[i] - '0');
			i++;
		}
		if (x == 1)
		{
			break;
		}
		i++;
	}
	num *= n;
	return (num);
}
