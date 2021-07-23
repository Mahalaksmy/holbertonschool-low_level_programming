#include "3-calc.h"
/**
 * op_add - Two Variable, function multiplies
 * @a: Variable A
 * @b: Variable B
 *
 * Return: Result of the operation
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Two Variable, function multiplies
 * @a: Variable A
 * @b: Variable B
 *
 * Return: Result of the operation
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Two Variable, function multiplies
 * @a: Variable A
 * @b: Variable B
 *
 * Return: Result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Two Variable, function divided
 * @a: Variable A
 * @b: Variable B
 *
 * Return: Result of the operation
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - Two Variable, function modulation
 * @a: Variable A
 * @b: Variable B
 *
 * Return: Result of the operation
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
	return (a % b);
}
