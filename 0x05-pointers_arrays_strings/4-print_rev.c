#include "main.h"

/**
 * print_rev - return the length of a string
 * @s : Parameter accept  string
 * Return: nothng
 *
 */

void print_rev(char *s)
{
int c;
int len;

char space = '\n';
for (c = 0; s[c] != '\0'; c++)
{
}

len = c;
while (len >= 0)

{
_putchar(s[len]);
len--;
}
_putchar(space);
}
