#include "holberton.h"
/**
*_pow_recursion - A function that returns the value x y y.
*@x: Base
*@y: n potencial.
* Return: value int.
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
