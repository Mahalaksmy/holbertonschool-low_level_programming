#include "variadic_functions.h"

/**
 * sum_them_all - A funticion of the Add
 * @n: the numer of parameters
 *
 * Return: the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int add = 0;

va_list x;

	if (n == 0)
{
	return (0);
}
	va_start(x, n);

	for (i = 0; i < n; i++)
{
	add += va_arg(x, int);
}
	va_end(x);
	return (add);
}
