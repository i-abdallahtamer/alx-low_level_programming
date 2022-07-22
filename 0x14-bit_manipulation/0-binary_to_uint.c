#include "main.h"
/**
 * binary_to_uint -Converts binary to an unsigned int
 * Description: function will return an unsigned int or 0
 * @b:  is pointing to a string of 0 and 1 chars
 * Return:unsigned int or 0
 **/


unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int i = 0;

if (b == NULL)
	return (0);

while (b[i] == '0' || b[i] == '1')
{
	val <<= 1;
	val += b[i] - '0';
	i++;
}
return (val);
}
