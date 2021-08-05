#include "holberton.h"
/**
 * set_bit - Function that sets the value of a bit.
 * @n: The pointer iterator
 * @index: is the index
 * Return: 1  or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int v_bit = (sizeof(unsigned int) * 8);

	if (index > v_bit)
	{
		return (-1);
	}

	*n = *n | (1 << index);
	return (1);
}
