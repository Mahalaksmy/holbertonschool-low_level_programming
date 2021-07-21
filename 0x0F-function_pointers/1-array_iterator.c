#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - A function
 * @size: the size
 * @action: A Pointer
 * @array: Is a Array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
