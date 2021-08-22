#include "holberton.h"
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: elements of size byte
 * @size: size of bytes
 * Return: NULL or array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*(arr + i) = 0;
	}
	return (arr);
}
