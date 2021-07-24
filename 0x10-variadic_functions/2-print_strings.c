#include "variadic_functions.h"

/**
 * print_strings - A function
 * @n: Parameter
 * @separator: Pointer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

va_list x;
	char *s;

	va_start(x, n);

	for (; i < n; i++)
	{
		s = va_arg(x, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL  && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(x);
}
