#include "holberton.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
int Alphabet = 97;

while (Alphabet <= 122)
{
_putchar(Alphabet);
Alphabet++;
}
_putchar ('\n');
}
