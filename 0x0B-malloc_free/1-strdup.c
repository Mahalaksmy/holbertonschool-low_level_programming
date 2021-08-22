#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - function that returns a newly allocated
 * @str: Variable type string.
 * Return: Returns NULL
 */
char *_strdup(char *str)
{
	int i, count;
	char *dest;

	if (str == 0)
	{
		return (NULL);
	}

	count = 0;

	while (*(str + count) != '\0')
	{
		count++;
	}

	dest = malloc(sizeof(char) * (count + 1));

	if (dest == 0)
	{
		return (NULL);
	}

	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(dest + i) = *(str + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
