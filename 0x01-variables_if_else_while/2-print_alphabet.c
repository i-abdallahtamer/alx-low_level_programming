#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Always 0 (success)
*/

int main(void)
{
char ch;
for(ch = 'A' ; ch <= 'Z' ; ch++)
putchar(tolower(ch));

return (0);
}
