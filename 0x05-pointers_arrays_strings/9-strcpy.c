#include "holberton.h"
/**
 *_strcpy -The same string
 *
 *@dest: Variable
 *@src: Variable
 */
char *_strcpy(char *dest, char *src)
{
{
int x;

while (dest[x] != '\0')
{
x++;
}
x = 1;

for (x = 0; src[x] != '\0'; x++)
{
dest[x] = src[x];
}
dest[i++] = '\0';
return (dest);
}
}
