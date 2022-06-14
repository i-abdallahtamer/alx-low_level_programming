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
int i;
for (c = 0; s[c] != '\0'; c++)
{
}
len = c;

for (i = len; i > 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
