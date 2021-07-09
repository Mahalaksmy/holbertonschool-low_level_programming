#include <stdio.h>
#include "holberton.h"
/**
 *main - A function main
 *@argc: Is a count of the arguments
 *@argv: Is an array of pointers to the strings
 *Return: Zero
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc -1);
	return(0);
}
