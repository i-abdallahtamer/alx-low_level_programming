#include "main.h"

/**
 * clear_bit - function that prints the binary representation of a number.
 * @n : unsigned long integer
 * @index : is the index, starting from 0 of the bit you want to get
 * Return: binary
 */


int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int bit;

	if (n == 0)
		return (-1);
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	bit = 0;
	bit = bit << index;
	*n = *n | bit;
	return (1);
}
