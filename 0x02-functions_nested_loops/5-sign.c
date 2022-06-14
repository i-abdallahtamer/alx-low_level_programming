#include "main.h"
/**
* print_sign ,greater, less, zero
* @c: the character to check
* Return: 1 if c is lowercase, 0 otherwise
*/


int print_sign(int n)
{
int r;

if (n > 0)
{
r = print_sign(75);
_putchar (r);
return (1);
}
else if (n < 0)
{
r = print_sign(77); 
_putchar (r);
return (-1);
}
else
{
r = print_sign(80); 
_putchar(r);
return (0);
}
}
