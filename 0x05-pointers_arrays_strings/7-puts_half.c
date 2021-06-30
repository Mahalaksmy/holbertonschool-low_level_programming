#include "holberton.h"
/**
 * puts_half- A function that prints half of a string, followed by a new line
 *
 *@str: Variable
 */
void puts_half(char *str)
{
int x = 0;
int n;

while (str[x] != '\0')
{
x++;
}

if (x % 2 == 0)
{
n = x / 2;
}
else
{
n = (x - 1) / 2;
}
n = n + 1;
while (str[n] != '\0')
{
_putchar (str[n]);
n++;
}
_putchar ('\n');
}
