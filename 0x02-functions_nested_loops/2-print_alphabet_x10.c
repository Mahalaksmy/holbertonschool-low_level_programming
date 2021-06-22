#include "holberton.h"

/**
 *print_alphabet_10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int num = 0,
Alphabet;

while (num <= 10)
{
for (Alphabet = 97; Alphabet <= 122; Alphabet++)
{
_putchar(Alphabet);
}
num++;
_putchar ('\n');
}
}
