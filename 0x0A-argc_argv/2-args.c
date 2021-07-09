#include "holberton.h"
#include <stdio.h>
/**
 *main - A function main
 *@argc: Is a count of the arguments
 *@argv: Is an array of pointers to the strings
 *
 *Return: Zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
