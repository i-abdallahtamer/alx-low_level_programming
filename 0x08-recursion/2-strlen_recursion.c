#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 *
 * @s : parameter string
 * Return : lengh
 */

int _strlen_recursion(char *s)
{
int len = 0;
if (*s =='\0')
{
len +=1;
}
_strlen_recursion(s + 1);
return (len);

}
