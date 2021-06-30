#include <stdio.h>
#include "holberton.h"
/**
*print_array - A function that prints n elements of an array of integers
*
*@a: Pointer
*@b: Variable
*/
void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%d",  *(a + x));
if (x < n - 1)
{
printf(", ");
}
}
_putchar('\n')
}
