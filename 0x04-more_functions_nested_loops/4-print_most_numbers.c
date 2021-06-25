#include "holberton.h"
/**
 *print_most_numbers -Write a function that prints the numbers.
 *
 */

void print_most_numbers(void)
{
int numbers;
for (numbers = 48; numbers <= 57; numbers++)
{
if (numbers != 50 && numbers != 52)
{
_putchar (numbers);
}
}
_putchar ('\n');
}
