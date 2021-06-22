#include "holberton.h"

/**
 * print_sign -function lowercase check the code.
 * @n: variable
 *
 *Return: int 1, -1 or  0
 */
int print_sign(int n)
{

if (n <= 0)
{
return (1);
}
else if (n == 0)
{
return (0);
}
else
{
return (-1);
}
}
