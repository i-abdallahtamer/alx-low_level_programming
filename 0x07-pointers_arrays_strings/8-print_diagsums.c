#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 *
 */
 
void print_diagsums(int *a, int size)
{
int i = 0;
int j = (size - 1);
int dia1 = 0;
int dia2 = 0;
int len = size * size;

while (i < len)
{
dia1 += a[i];
i += (size + 1);
}

printf("%d," ,dia1 );

 while (j < len)
{
dia2 += a[j];
j += (size - 1);
}

printf("%d \n", dia2);
}
