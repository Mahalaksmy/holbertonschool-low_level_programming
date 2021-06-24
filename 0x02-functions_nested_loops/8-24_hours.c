#include "holberton.h"
/**
 *jack_bauer -Return the absolute value of an integer
 *
 *Return: int
 */
void jack_bauer(void)
{
int Hora, Min;

for (Hora = 0; Hora <= 23; Hora++)
{
for (Min = 0; Min <= 59; Min++)
{
_putchar('0' + (Hora / 10));
_putchar('0' + (Hora % 10));
_putchar(58);
_putchar('0' + (Min / 10));
_putchar('0' + (Min % 10));
_putchar('\n');
}
}
return (0);
}
