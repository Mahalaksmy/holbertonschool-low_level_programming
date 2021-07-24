#include "variadic_functions.h"

/**
 * print_numbers - Name a function
 * @separator: A pointer
 * @n: Parmeter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
va_list x;

	va_start(x, n);
	for (i = 0; i < n; i++)
{
	printf("%d", va_arg(x, int));
	if (i < (n - 1) && separator)
		printf("%s", separator);
}
	printf("\n");

	va_end(x);
}
