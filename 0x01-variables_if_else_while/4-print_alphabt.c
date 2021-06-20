#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (Success)
 */
int main(void)
{
int Alpha;

for (Alpha = 97; Alpha <= 122; Alpha++)
{
if (Alpha != 101 && Alpha != 113)
{
putchar(Alpha);
}
}
putchar('\n');
return (0);
}
