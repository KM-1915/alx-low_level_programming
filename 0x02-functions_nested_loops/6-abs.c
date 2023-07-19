#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: integer
 * Return: absolute value
 */
int _abs(int i)
{
	int absv;

	if (i < 0)
	{
		absv = i * -1;
	}
	return (absv);
}
