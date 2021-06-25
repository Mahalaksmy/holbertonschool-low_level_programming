#include "holberton.h"
/**
 *print_numbers - Write a function that multiplies two integers.
 *
 */
void print_numbers(void)
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
