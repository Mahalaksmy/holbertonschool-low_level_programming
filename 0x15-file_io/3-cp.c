#include "main.h"
/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: arguments.
 * Return: always 0 :D
 */
int main(int argc, char *argv[])
{
	int filex, filey, v_read, num;
	char buffer[1024];

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28), exit(97);
	}
	filex = open(argv[1], O_RDONLY);
	if (filex == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	}
	filey = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (filey == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	do {
		v_read = read(filex, buffer, 1024);
		num = write(filey, buffer, v_read);
	} while (v_read == 1024);
	if (v_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (num == -1 || num != v_read)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(filex) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);
	}
	if (close(filey) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);
	}
	return (0);
}
