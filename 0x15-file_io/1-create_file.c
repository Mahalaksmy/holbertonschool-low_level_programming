#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: File to create
 * @text_content: terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

for (i = 0; text_content[i]; i++);

write(fd, text_content, i);
		close(fd);
		return (1);
}
