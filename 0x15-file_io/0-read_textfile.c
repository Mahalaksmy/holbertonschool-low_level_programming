#include "main.h"
/**
 * read_textfile - function that reads a text file
 * @filename: the file to read.
 * @letters: is the number of letters it should read and print
 * Return: Return Result of 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n_read, n_write;
char *buffer;

buffer = malloc(sizeof(buffer) * letters);
	if (buffer == NULL || filename == NULL)
		return (0);
fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}

	n_read = read(fd, buffer, letters);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}

	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (n_write);
}
