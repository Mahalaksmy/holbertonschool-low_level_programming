#include "holberton.h"

/**
 *more_numbers -Write a function that prints 10 times the numbers,
 *
 */
void more_numbers(void)
{
int numbers, num;

for (num = 0; num <= 10; num++)
{
for (numbers = 0; numbers <= 14; numbers++)
{
if (numbers > 9)
{
_putchar('0' + (numbers / 10));
_putchar('0' + (numbers % 10));
}
_putchar('\n');
}
}
