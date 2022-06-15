#include "main.h"

/**
 * _srtcat - return the length of a string
 * @dest : Parameter accept  string
 * @src : second parameter 
 * Return: nothng
 *
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] += src[j];
}
return(dest);
}
