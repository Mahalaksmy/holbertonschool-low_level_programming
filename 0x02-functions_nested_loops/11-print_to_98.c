#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 -that prints all natural numbers from n to 98
 *
 *@n: variables
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
if (n == 98)
{
printf("%d\n", n);
}
}
}
else if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
if (n == 98)
{
printf("%d\n", n);
}
}
}
else
{
printf("%d\n", n);
}
}
