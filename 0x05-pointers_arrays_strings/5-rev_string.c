#include "main.h"

/**
 * rev_string - return the length of a string
 * @s : Parameter accept  string
 * Return: nothng
 *
 */

void rev_string(char *s)
{
int c;
int len;
int i = 0;

for (c = 0; s[c] != '\0'; c++)
{
_putchar(s[c]);
}
len = c;
_putchar(10);

while (i <= len)
{
_putchar(s[len]);
len--;
}

}
