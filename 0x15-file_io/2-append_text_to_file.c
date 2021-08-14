#include "main.h"

/**
 * append_text_to_file - A unction that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: is the NULL terminated string
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	for (i = 0; text_content[i]; i++)
		;

	write(fd, text_content, i);
	close(fd);
	return (1);
}