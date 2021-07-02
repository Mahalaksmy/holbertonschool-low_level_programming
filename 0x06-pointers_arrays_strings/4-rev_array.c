#include "holberton.h"
/**
 * reverse_array - A function that reverse of an array.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int *ptr, x, aux, z;

	ptr = a;

	for (x = 1; x < n; x++)
	{
		ptr++;
	}

	for (z = 0; z < x / 2; z++)
	{
		aux = a[z];
		a[z] = *ptr;
		*ptr = aux;
		ptr--;
	}
}
