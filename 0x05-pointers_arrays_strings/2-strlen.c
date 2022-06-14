#include "main.h"
#include <stdio.h>
/**
 * _strlen - return the length of a string
 * @s : Parameter accept  string
 * Return: length of string
 *
 */

int _strlen(char *s)
{
int b = 0;
int count = 0;

while ( s[b]!= '\0')

{
if (s[b] == '\0'){

break;
}
else
{
count += 1;
}
b++;
}
_putchar(count / 10 + '0');
return (0);
}
