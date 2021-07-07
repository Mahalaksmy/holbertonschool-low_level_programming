#include "holberton.h"
/**
 * _strlen_recursion- Write a function that returns the length of a string.
 *@s: A string variable
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
