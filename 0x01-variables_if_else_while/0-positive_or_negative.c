#include <stio.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (success)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n < 0)
{
	printf("is Negative \n");
}
else if (n > 0)
}
	printf("is Positive \n");
else
{
	printf("is Zero\n");
return (0);
}
