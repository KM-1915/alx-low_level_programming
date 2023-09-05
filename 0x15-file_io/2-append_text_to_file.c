#include"main.h"
#include<stdio.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t i = 0, n = 0;
	char *c;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
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
