#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints a array
 * @c: Variable
 * @size: the size of the memory to print
 *
 * Return: Null or array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	p[i] = '\0';
	return (p);
}
