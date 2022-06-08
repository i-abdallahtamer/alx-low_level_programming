#include "main.h"
/**
* print_alphabet - Entry point
* Description:print the alphabet in lowercase x10.
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)


{
int i;
char ch = 'a';

while (i <= 10)
{
while (ch <= 'z')
{
_putchar (ch);
ch++;
}
_putchar ('\n');
i++;
}

}
