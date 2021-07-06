#include "holberton.h"

/**
 * leet - Afunction that encodes a string into 1337.
 * @s: A pointer
 * Return: s
 */

char *leet(char *s)
{
	int x = 0;
	int y = 0;
	char *a = "aAeEoOlLtT";
	char *b = "4433001177";

	while (*(s + x) != '\0')
	{
		while (*(x + y) != '\0')
		{
			if (*(s + x) == *(a + y))
				*(s + x)  = *(b + y);
			y++;
		}
		y = 0;
		x++;
	}
	return (s);
}
