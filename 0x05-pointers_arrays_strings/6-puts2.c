#include "holberton.h"
/**
 * puts2 - A  function that prints every other character of a string
 *
 *@str: Variable
 */
void puts2(char *str)
{
int i;
int x = 0;

while (str[x] != '\0')
{
x++;
}
for (i = 0; i < x; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

