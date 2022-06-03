#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int intT;
char charT;
long longT;
long long longTT;
float floatT;

printf("Size of a char: %2d byte(s)\n", sizeof(charT));
printf("Size of an int:  %2dbyte(s)\n ", sizeof(intT));
Printf("Size of a long int: %2dbyte(s)\n ", sizeof(longT intT));
Printf("Size of a long  long int: %2dbyte(s)\n ", sizeof(longTT));
Printf("Size of a float: %2dbyte(s)\n", sizeof(floatT));

return (0);
}
