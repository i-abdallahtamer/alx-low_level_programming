#include "main.h"

/**
 * _strlen - return the length of a string
 * @s : Parameter accept  string
 * @count: store count value
 * Return: length of string
 *
 */

int _strlen(char *s)
{
int b;
int count = 0;

for (b = 0; s[b] != '\0'; b++)
{

count += 1;
}
_putchar(count);
return(0);
}
