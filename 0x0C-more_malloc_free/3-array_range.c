#include "holberton.h"
/**
 * array_range - function that creates an array of integers.
 * @min: Variable int
 * @max: Variable int
 * Return: NULL or array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	j = max - min;
	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (j + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		*(arr + i) = min;
	}
	return (arr);

}
