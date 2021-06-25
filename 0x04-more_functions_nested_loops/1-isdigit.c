#include "holberton.h"

/**
 *_isdigit - Afunction that checks for a digit (0 through 9).
 *@c: Variable
 *Return: Always 1 or 0.
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
