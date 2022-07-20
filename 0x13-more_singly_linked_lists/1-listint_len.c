#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *listint_len -print list.
 *Description: Function that prints content of a single linked list
 * @h: pointer to a structure typedef list_t
 * Return: the number of nodes
 **/
size_t listint_len(const listint_t *h)
{
const  listint_t *temp = h;

size_t size;

for (size = 0; temp != NULL; size++)
{
temp = temp->next;
}
return (size);
}
