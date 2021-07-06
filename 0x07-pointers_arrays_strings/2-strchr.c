#include "holberton.h"

/**
 * _strchr - A a function that locates a character in a s
 * @s: A Pointer
 * @c: Variable
 *
 * Return: the string or null
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	int a;

	while (s[x])
	{
		x++;
	}

	for (a = 0; a <= x; a++)
	{
		if (c == s[a])
		{
			s += a;
			return (s);
		}
	}

	return ('\0');
}
