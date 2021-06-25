#include "holberton.h"

/**
 *print_square -Write a function that prints a square, followed by a new line.
 *@size: Variable
 */
void print_square(int size)
{
int a, b;

if (size > 0)
{
for (b = 0; b < size; b++)
{
for (a = 0; a < size; a++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
