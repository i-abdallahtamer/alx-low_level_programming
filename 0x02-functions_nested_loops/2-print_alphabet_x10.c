#include "main.h"
/**
* print_alphabet - Entry point
* Description:Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
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
i++;
}
_putchar ('\n');

}
