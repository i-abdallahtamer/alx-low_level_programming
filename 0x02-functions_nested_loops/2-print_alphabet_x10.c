#include "main.h"
/**
* print_alphabet - Entry point
* Description: prints the alphabet in small caps
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)


{
int i;
char ch = 'a';

for (i = 0; i <= 10; i++)
{
while (ch <= 'z')
{
_putchar (ch);
ch++;
}
}
_putchar ('\n');

}
