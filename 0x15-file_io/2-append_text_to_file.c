#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: content of the new file
 * Return: Always 1. or -1 on Error.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wd;

	fd = open(filename, O_APPEND, 0600);
	if (fd == -1 || filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL && filename)
	{
		close(fd);
		return (1);
	}
	else if (text_content == NULL && !filename)
	{
		close(fd);
		return (-1);
	}
	wd = write(fd, text_content, strlen(text_content));
	if (wd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
