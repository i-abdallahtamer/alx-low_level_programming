#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * m - stores 3 int in a new allocated space in memory and prints the sum
 *
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
