#include "holberton.h"

/**
 *print_diagonal -Write a function that draws a diagonal line on the terminal
 *
 */
void print_diagonal(int n)
{
int con;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (con = 0; con < n; con++)
{
_putchar(92);
}
}
_putchar('\n');
}
