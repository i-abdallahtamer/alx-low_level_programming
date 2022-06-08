#include "main.h"
/**
* print_sign ,greater, less, zero
* @c: the character to check
* Return: 1 if c is lowercase, 0 otherwise
*/


int print_sign(int n)
{

if (n > 0)
{
return (1);
_putchar(75);
}
else if (n < 0)
{
return(-1);
_putchar(77);
}
else
{
return (0);
_putchar(80);
}
}
