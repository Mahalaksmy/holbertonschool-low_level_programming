#include "holberton.h"
/**
 * rev_string -  a function that reverses a string
 *
 * @s: Variable.
 */
void rev_string(char *s)
{
int x = 0;
int i, a;
char *p, aux;

p = s;
while (s[x] != '\0')
{
x++;
}
for (a = 1; a < x; a++)
{
p++;
}
for (i = 0; i < (x / 2); i++)
{
aux = s[i];
s[i] = *p;
*p = aux;
--p;
}
}
