#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: NULL if ac == 0 or av == NULL, or fails
 * pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int n, len = 0, index = 0;
	char *end;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < ac; n++)
	{
		len += strlen(av[n]) + 1;
	}

	end = (char *)malloc(len * sizeof(char));
	if (end == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < ac; n++)
	{
		strcpy(end + index, av[n]);
		index += strlen(av[n]);
		end[index] = '\n';
		index++;
	}
	return (end);
}
