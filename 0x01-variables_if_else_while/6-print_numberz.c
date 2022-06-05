#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Always 0 (success)
*/

int main(void)
{
int ch;

for (ch = '0' ; ch <= '9' ; ch++)
{
putchar(tolower(ch));
}
putchar();

return (0);
}
