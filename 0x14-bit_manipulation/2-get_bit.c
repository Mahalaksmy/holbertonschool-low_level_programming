#include "main.h"
/**
 * get_bit - function that returns the value of a bit a index
 * @n: iterator
 * @index: is the index.
 * Return: The value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int v_bit = (sizeof(unsigned int) * 8);

	if (index < v_bit)
	{
		return ((n >> index) & 1);
	}
	else
	{
		return (-1);
	}
}
