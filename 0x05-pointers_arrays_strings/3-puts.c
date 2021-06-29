#include "holberton.h"

/**
 *_puts - A function that prints a string,
 *
 *@str: Variables type str
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '0')
{
_putchar(str[i]);
x++;
}
_putchar('\n');
}
