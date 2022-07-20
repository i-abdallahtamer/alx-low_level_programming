#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list -add node to list.
 *Description: Function that frees a list_t list
 * @head: pointer to a pointer
 * Return: void.
 **/

int pop_listint(listint_t **head)
{
	listint_t  *temp;
	int p;
if (head == NULL)
	return (0);

temp = *head;
*head = (*(head))->next;
p =  temp->n;
free(temp);
return (p);

}

