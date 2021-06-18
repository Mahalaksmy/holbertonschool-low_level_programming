#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int Alpha = 97,
Alpha2 = 65;

while (Alpha <= 122)
{
putchar(Alpha);
Alpha++;
}
while (Alpha2 <= 90)
{
putchar(Alpha2);
Alpha2++;
}
putchar ('\n');
return (0);
}
