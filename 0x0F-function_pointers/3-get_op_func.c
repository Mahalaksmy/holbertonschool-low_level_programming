#include "3-calc.h"

/**
 * get_op_func - Name a Funtion
 * @s: Variable
 *
 * Return: A pointer of functions
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}

	};
	int i;

	i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);

}
