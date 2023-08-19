#include"function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes, n;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	for (n = 0; n < bytes; n++)
	{
		printf("%02hhx", ((char *)main)[n]);
		if (n < bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
