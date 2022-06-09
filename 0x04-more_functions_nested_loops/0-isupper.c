#include "main.h"

/**
* int _isupper - takes a character and return 1 
* if its an upper case
* @c: letter of the alphabet 
*
* Return: 1 if upper case 
*/

int _isupper(int c)
{
if(c >= 65 && c <= 90)
{
return(1);
}
else if(c >= 97 && c <= 122)
{
return(0);
}
