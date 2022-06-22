#include "main.h"
/**
 * _puts_recursion - fills memory with a constant byte,
 *
 *
 */

void _puts_recursion(char *s)
{
int i = 0;
while (s[i] != '\0')
{
	_putchar(s[i]);
i++;
}
}
