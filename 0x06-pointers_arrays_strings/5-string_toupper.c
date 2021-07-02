#include "holberton.h"
/**
 * *string_toupper  - a function that changes all lowercase letters
 *
 * @str: Variable
 * Return: Str
 */
char *string_toupper(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}
