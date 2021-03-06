#include "main.h"

/**
 * read_textfile - check the code
 * @filename: the name of the file to read
 * @letters: size in bits to read
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wd;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	wd = write(STDOUT_FILENO, buf, rd);
	if (wd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (rd);
}
