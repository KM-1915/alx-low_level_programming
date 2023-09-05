#include"main.h"
#include<stdio.h>
/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 * if the file already exists, truncate it
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int i = 0, n = 0;
	char *c;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (n = 0, c = text_content; *c; c++)
			n++;
		i = write(file, text_content, n);
	}
	if (close(file) == -1 || n != i)
	{
		return (-1);
	}
	return (1);
}
