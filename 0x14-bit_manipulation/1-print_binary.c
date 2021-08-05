#include "main.h"
/**
 * binary_printing - A function that prints the binary.
 * @n: Variable
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
