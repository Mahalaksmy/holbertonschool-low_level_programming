#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - A function reallocates 
 * @ptr: Variable pointer.
 * @old_size: type size
 * @new_size: type size
 * Return: mem pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int index;

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
		{
			return (NULL);
		}
		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = mem;

	for (index = 0; index < old_size && index < new_size; index++)
	{
		filler[index] = *ptr_copy++;
	}

	free(ptr);
	return (mem);
}
