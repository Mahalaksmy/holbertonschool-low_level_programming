#include "holberton.h"
/**
 *print_last_digit -Return the absolute value of an integer
 *@num: Variable
 *Return: int
 */
int print_last_digit(int num)
{
num %= 10;

if (num < 0)
{
num = num * -1;
_putchar('0' + num);
}
else
{
_putchar('0' + num);
}
return (num);
}
