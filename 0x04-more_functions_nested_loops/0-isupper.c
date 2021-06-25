#include "holberton.h"
/**
 * _isupper -A function that checks for uppercase character.
 *
 * Return: Always  1 or 0.
 *@c: variable
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
