#include "holberton.h"
/**
 *_strncat- Write a function that concat
 *
 * @dest: Variable
 * @src: Variable
 * @n: Variable
 * Return: Char dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int a;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (a = 0; src[a] != '\0'; a++)
	{
		if (a < n)
		{
			dest[x] = src[a];
			x++;
		}

	}
	return (dest);
}
