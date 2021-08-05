#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number.
 * @b: Is pointing to a string
 * Return: The converted number or Zero.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	unsigned int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		x = (x * 2) + (b[i] - '0');
	}
	return (x);
}
