#include <stdlib.h>
#include "holberton.h"
int _strlen(char *s);
/**
 * argstostr - command line arguments
 * @ac: the number of arguments
 * @av: the argument 
 *
 * Return: pointer or Null
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0, c = 0;
	char *cat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		length = length + _strlen(av[i]);

	cat = malloc(sizeof(char) * (length + ac + 1));
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *temp = av[i];

		for (j = 0; temp[j] != '\0'; j++)
		{
			cat[c] = temp[j];
			c++;
		}
	cat[c] = '\n';
	c++;
	}
	cat[c] = '\0';

	return (cat);
}
/**
 * _strlen - Return the length of a string
 * @s: Variable string
 *
 * Return: The length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
