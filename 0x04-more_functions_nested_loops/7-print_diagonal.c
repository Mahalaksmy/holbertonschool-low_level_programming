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
putchar('\n');
}
else
{
for (con = 0; con < n; con++)
{
putchar(92);
}
}
putchar('\n');
}
