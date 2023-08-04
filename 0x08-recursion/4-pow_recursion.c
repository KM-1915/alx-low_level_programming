#include"main.h"
#include<stdio.h>
/**
 * _pow_recursion - prints value of x to the power of y
 * @x: number
 * @y: power value
 * Return: value of x raised to the power of y, if y < 0 (-1)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
