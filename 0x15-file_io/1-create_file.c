#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: content of the new file
 * Return: Always 1. or -1 on Error.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wd;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1 || filename == NULL)
	{
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
