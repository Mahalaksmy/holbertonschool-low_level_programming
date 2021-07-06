#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of the two diagonals
 *
 * @a: A pointer
 * @size: Variable
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int x;
	int Diag1 = 0, Diag2 = 0;

	for (x = 0; x < size; x++)
	{
		Diag1 += a[(size + 1) * x];
		Diag2 += a[(size - 1) * (x + 1)];
	}

	printf("%d, %d\n", Diag1, Diag2);
}
