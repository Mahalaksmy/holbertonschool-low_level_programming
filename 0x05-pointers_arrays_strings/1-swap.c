#include "holberton.h"
/**
 * swap_int -Write a function that swaps the values.
 *
 *@a: Variable
 *@b: Variable
 */
void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
