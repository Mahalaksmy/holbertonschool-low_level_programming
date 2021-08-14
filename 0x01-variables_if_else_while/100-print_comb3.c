#include <stdio.h>
/**
* main - print combo of 2 numbers
* description - nested loop
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
int y;
for (x = 0; x <= 9; x++)
{
for (y = x + 1; y <= 9; y++)
{
putchar(x + '0');
putchar(y + '0');
if (x < 8)
{
putchar (',');
putchar (' ');
}
}
}
putchar('\n');
return (0);
}
