#include "holberton.h"
/**
 * _memset - A a function that fills memory with a constant byte.
 * @s: A pointer to the block of memory to fillt
 * @b: is the character to fill s
 * @n: Represents the size of the memory block to fill
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	char *ptr = s, a = b;

	for (x = 0; x < n; x++)
	{
		ptr[x] = a;
	}
	return (ptr);
}
