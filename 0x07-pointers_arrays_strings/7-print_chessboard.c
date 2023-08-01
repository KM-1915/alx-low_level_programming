#include "main.h"
#include<stdio.h>
/**
 * print_chessboard - print_chessboard
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
		{
			if (n == 7)
			{
				_putchar(a[i][n]);
				_putchar('\n');
			}
			else
				_putchar(a[i][n]);
		}
	}
}
