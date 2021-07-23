#include "3-calc.h"

/**
 * main - A Function principla
 * @argc: Parameters
 * @argv: Pparameters
 *
 * Return: Depending on the result
 */
int main(int argc, char *argv[])
{
int num1, num2, calc;
char *operator;


if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];
calc = (*get_op_func(operator)) (num1, num2);

printf("%d\n", calc);
return (0);

}
