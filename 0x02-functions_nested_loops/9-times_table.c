#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* add - returns the sum of two numbers
* Return: Always  Plus  (Success)
*/
void times_table(void)
{
int i ;
int j ;
int mult;
for (j = 0; j <= 9; j++)
{

for  (i = 1;  i <= 9; i++)
{
 mult = i * j;
printf ("%d,", mult);
}
printf ("\n");
 
}
}
