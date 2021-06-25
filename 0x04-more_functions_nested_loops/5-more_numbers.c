#include "holberton.h"

/**
 *more_numbers -Write a function that prints 10 times the numbers,
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int numbers, num;

for (num = 0; num <= 10; num++)
{
for (numbers = 0; numbers <= 14; numbers++)
{
putchar('0' + numbers);
}
putchar('\n');
}
return (0);
}
