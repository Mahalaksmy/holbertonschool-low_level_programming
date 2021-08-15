#include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal -  function that draws a diagonal line on the terminal.
 * @n: integer
*/
void print_diagonal(int n)
{
	int x;
	int diagonal;

	if (n > 0)
	{
		for (diagonal = 1; diagonal <= n; diagonal++)
		{
			for (x = 1; x < diagonal; x++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
