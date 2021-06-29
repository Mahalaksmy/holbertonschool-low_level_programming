#include "holberton.h"
/**
 *_strlen - A function that returns the length of a string.
 *
 *@s: Variable
 */
int _strlen(char *s)
{
int x = 0;
while (s[x] != '\0')
x++;
return (x);
}
