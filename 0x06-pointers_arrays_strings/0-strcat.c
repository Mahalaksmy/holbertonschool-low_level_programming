#include "holberton.h"
/**
 *_strcat- Write a function that concatenates two strings.
 *
 * @dest: Variable
 * @src: Variable
 * Return: Char dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int a;

	while (dest[x] != '\0')
	{
		x++;
	}

	for (a = 0; src[a] != '\0'; a++, x++)
	{
		dest[x] = src [a];
	}

	return (dest);
}
