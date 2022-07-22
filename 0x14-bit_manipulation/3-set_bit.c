#include "main.h"

/**
 * set_bit - function that prints the binary representation of a number.
 * @n : unsigned long integer
 * @index : is the index, starting from 0 of the bit you want to get
 * Return: binary
 */



int set_bit(unsigned long int *n, unsigned int index)

{
unsigned int j;
char b;

j = (*n >> index);
b = (j & 1);
	if (b == 1 || b == 0)
	{
		*n = 1;
		return (1);
	}
	else
	{
		return (-1);
	}
}
