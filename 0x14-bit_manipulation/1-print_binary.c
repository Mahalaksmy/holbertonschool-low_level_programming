#include "main.h"
/**
 * binary_printing - A function that prints the binary.
 * @n: Variable
 * Return: 0
 */
void binary_printing(unsigned int n)
{
	if (n == 0)
		return;

	binary_printing(n >> 1);

	if ((n & 1) == 1)
		_putchar('1');

	if ((n & 1) == 0)
		_putchar('0');
}
