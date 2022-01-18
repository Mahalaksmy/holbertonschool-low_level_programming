#include "search_algos.h"
/**
 * linear_search - Searches in an array using the Linear search algorithm.
 * @array: Pointer to the first element of the array
 * @size: Is the number of elements in array
 * @value: The value to search for
 * Return: thrthe value, or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array != NULL)
	{
		for (i = 0; i < (int)size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}

	return (-1);
}
