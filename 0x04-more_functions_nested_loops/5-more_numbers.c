#include "main.h"

/**
* more_numbers - print 1 to 14 10 times
* @ch; variable to hold numbers
* Return: void
*/

void more_numbers(void)
{
int ch;
int i = 0;
while (i < 10)
{
for (ch = 0; ch <= 14; ch++)
{
_putchar(ch + '0');
}
_putchar('\n');

i++;
}
_putchar('\n');
}
