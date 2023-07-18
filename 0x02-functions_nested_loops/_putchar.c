#include<unistd.h>
/**
 * _putchar.c - writes character c to stdout
 * @C: The character to print
 *
 * Return: 1 for success
 * on error, -1 is returned, and errno is set approximately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
