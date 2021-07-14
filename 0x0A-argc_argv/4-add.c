#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - Function Principal
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: zero or 1
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (positivenumbers(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%u\n", sum);

	return (0);
}

/**
 * positivenumbers-  A program that adds positive numbers.
 * @n: Variable
 *
 * Return: Zero or 1
 */
int positivenumbers(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (!isdigit(n[i]))
			return (0);
	}

	return (1);
}
