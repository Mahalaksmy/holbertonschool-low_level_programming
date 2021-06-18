#include <stdlib.h>
#include <time.h>
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
if (n > 0)
{
printf(n, "is positive %d\n");
}
else if (n == 0)
{
printf(n, "is zero %d\n");
}
else
(n < 0)
{
printf(n, "is negative %d\n");
}
return (0);
}
