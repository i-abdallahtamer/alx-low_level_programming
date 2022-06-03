#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

char charT;
int intT;
long longT;
long long longTT;
float floatT;

printf("Size of a char: %ldbyte(s)\n", sizeof(charT));
printf("Size of an int:  %ldbyte(s)\n ", sizeof(intT));
Printf("Size of a long int: %ldbyte(s)\n ", sizeof(longT));
Printf("Size of a long  long int: %ldbyte(s)\n ", sizeof(longTT));
Printf("Size of a float: %ldbyte(s)\n", sizeof(floatT));

return (0);
}
