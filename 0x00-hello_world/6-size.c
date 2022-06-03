#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

char chardt;
int intdt;
long longT;
long long longTT;
float floatT;

printf("Size of a char: %ld byte(s)\n", sizeof(chardt));
printf("Size of an int:  %ldbyte(s)\n ", sizeof(intdt));
Printf("Size of a long int: %ldbyte(s)\n ", sizeof(longT));
Printf("Size of a long  long int: %ldbyte(s)\n ", sizeof(longTT));
Printf("Size of a float: %ldbyte(s)\n", sizeof(floatT));

return (0);
}
