#include "holberton.h"

/**
 *_puts - A function that prints a string,
 *
 *@str: Variables type str
 */
void _puts(char *str)
{
int x = 0;
while (str[x] != '0')
{
_putchar(str[x]);
x++;
}
_putchar('\n');
}
