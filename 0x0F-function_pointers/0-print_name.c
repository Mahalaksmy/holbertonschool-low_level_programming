#include "function_pointers.h"

/**
 * print_name - Name a Funtiom
 * @name: Variable Char
 * @f: Pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
