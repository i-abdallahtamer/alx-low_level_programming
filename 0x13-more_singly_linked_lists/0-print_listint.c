#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint -print list.
 *Description: Function that prints content of a single linked list
 * @h: pointer to a structure typedef list_t
 * Return: the number of nodes
 **/
size_t print_listint(const listint_t *h)
{
const  listint_t *temp = h;

size_t size;

for (size = 0; temp != NULL; size++)
{
	if (temp == NULL)
		printf("[0] (nill)\n");

	else
		printf("%d\n", temp->n);
temp = temp->next;
}
return (size);
}
