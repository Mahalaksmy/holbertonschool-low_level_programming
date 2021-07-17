#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
 * malloc_checked -  A function that allocates memory.
 * @b: A variable type int
 *
 * Return: A pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
