#include "holberton.h"
/**
 *_strncpy- Write a function that copies a string con a integer.
 *
 * @dest: Variable
 * @src: Variable
 * @n: Variable
 * Return: Char dest
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
