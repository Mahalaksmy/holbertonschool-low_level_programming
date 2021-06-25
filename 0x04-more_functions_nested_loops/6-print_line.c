#include "holberton.h"

/**
 *print_line -Write a function that draws a straight line in the terminal.
 *@n: Variable
 */
void print_line(int n)
{
int con;

for (con = 1; con <= n; con++)
{
_putchar(95);
if (n <= 0)
{
_putchar('\n');
}
}
_putchar('\n');
}
