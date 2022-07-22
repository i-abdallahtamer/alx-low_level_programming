#include "main.h"

/**
 * get_bit - function that prints the binary representation of a number.
 * @n : unsigned long integer
 * @index : is the index, starting from 0 of the bit you want to get
 * Return: binary
 */



int get_bit(unsigned long int n, unsigned int index)

{
char b;
unsigned int j;

	j = (n >> index);
	b = (j & 1);
	if (b == 1 || b == 0)
	{
		return (b);
	}
	else
	{
		return (-1);
	}
}
