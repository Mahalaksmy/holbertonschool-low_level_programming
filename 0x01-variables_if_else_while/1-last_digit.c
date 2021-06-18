#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int last_Digit = n % 10;
if (last_Digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_Digit);
}
else if (last_Digit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_Digit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_Digit);
}
return (0);
}
