#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - A function that returns a pointer to a 2
 * @width: The width
 * @height: The height
 *
 * Return: Array or Null
 */

int **alloc_grid(int width, int height)
{
	int i, x;
	int **pptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	pptr = malloc(sizeof(int *) * height);
	if (pptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pptr[i] = malloc(sizeof(int) * width);
		if (pptr[i] == NULL)
		{
			free(pptr);
			for (x = 0; x <= i; x++)
				free(pptr[x]);

			return (NULL);
		}

		for (x = 0; x < width; x++)
			pptr[i][x] = 0;
	}

	return (pptr);
}
