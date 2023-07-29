#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * *cap_string - capitalizes all words of a string
 * @str: capitalized string
 * Return: pointer to capitalized string
 */
char *cap_string(char *str)
{
	int ind = 0;

	while (str[ind])
	{
		while (!(str[ind] >= 'a' && str[ind] <= 'z'))
			ind++;

		if (str[ind - 1] == ' ' || str[ind - 1] == '\t' ||
		str[ind - 1] == '\n' || str[ind - 1] == ',' ||
		str[ind - 1] == ';' || str[ind - 1] == '.' ||
		str[ind - 1] == '!' || str[ind - 1] == '?' ||
		str[ind - 1] == '"' || str[ind - 1] == '(' ||
		str[ind - 1] == ')' || str[ind - 1] == '{' ||
		str[ind - 1] == '}' || ind == 0)
			str[ind] -= ' ';

		ind++;
	}
	return (str);
}
