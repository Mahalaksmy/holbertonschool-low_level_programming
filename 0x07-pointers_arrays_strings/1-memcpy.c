#include "holberton.h"
/**
 * _memcpy -a function that copies memory area.
 *@dest: Is a Pointer
 *@src: Is a Pointer
 *@n: Integer
 *Return: New pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
