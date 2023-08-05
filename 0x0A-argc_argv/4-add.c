#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n, i, add = 0;

	for (n = 1; n < argc; n++)
	{
		for (i = 0; argv[n][i] != '\0'; i++)
		{
			if (!isdigit(argv[n][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[n]);
	}
	printf("%d\n", add);
	return (0);
}
