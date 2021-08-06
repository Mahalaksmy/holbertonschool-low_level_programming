#include "main.h"
/**
 * set_bit - Function that sets the value of a bit.
 * @n: The pointer iterator
 * @index: is the index
 * Return: 1  or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int v_bit = 1;

	while (v_bit > 0)
	{
		if (i == index)
		{
			*n = (v_bit | *n);
			return (1);
		}
		i += 1;
		v_bit = v_bit << 1;
	}
	return (-1);
}
