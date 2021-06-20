#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int Alpha = 48;
while (Alpha <= 57)
{
putchar(Alpha);
if (Alpha != 57)
{
putchar(',');
putchar(' ');
}
Alpha++;
}
putchar('\n');
return (0);
}
