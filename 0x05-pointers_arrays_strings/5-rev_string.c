#include "main.h"

/**
 * rev_string - return the length of a string
 * @s : Parameter accept  string
 * Return: nothng
 *
 */

void rev_string(char *s)
{
int len = 0;
char q, p;

while (s[len])
{
q = s[len];

len++;
}
len--;


while (len >= 0)
{
p = s[len];

len--;
}

}
