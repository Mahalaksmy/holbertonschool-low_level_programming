#include "holberton.h"
/**
 *jack_bauer -Return the absolute value of an integer
 *
 */
void times_table(void)
{
int Num1, Num2;

for (Num1 = 0; Num2 <= 9; Num1++)
{
for (Num2 = 0; Num2 <= Num1; Num2++)
{
_putchar ('0' + (Num1 * Num2));
}
}
}
