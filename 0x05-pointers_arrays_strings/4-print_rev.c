#include "holberton.h"
/**
 * print_rev - Write a function that prints a string, in reverse
 *
 * @s: variable
 */
void print_rev(char *s)
{
int x = 0;

while (s[x] != '\0')
x++;

x = x - 1;

while (x >= 0)
{
_putchar(s[x]);
x--;
}
_putchar('\n');
}
