#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index.
 * @n: Variable Type pointer
 * @index: is the index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int v_bit = (sizeof(unsigned int) * 8);

	if (index > v_bit)
	{
		return (-1);
	}

	*n = *n & ~(1 << index);
	return (1);
}
