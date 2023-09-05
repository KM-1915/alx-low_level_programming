#include"main.h"
#include<stdio.h>
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: file
 * @letters: letters
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected
 * amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, i, n;
	char *c;

	c = malloc(letters);
	if (c == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
	{
		free(c);
		return (0);
	}

	i = read(x, c, letters);

	n = write(STDOUT_FILENO, c, i);

	close(x);

	return (n);
}
