#include "holberton.h"

/**
 *print_line -Write a function that draws a straight line in the terminal.
 *
 */
void print_line(int n)
{
int con;

for (con = 0; con < n; con++)
{
_putchar(95);
if (n <= 0)
{
_putchar('\n');
}
}
_putchar('\n');
}
