#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint -print list.
 *Description: Function that prints content of a single linked list
 * @head: pointer to a structure typedef list_t
 * @n: integer
 * Return: the number of nodes
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
	return (NULL);
}
new_node->n = n;
new_node->next = (*head);
(*head) = new_node;
return (new_node);
}
