#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -add node to list.
 *Description: Function that frees a list_t list
 * @head: pointer to a pointer
 * Return: void.
 **/



void free_listint2(listint_t **head)
{

listint_t  *tmp;
if (head == NULL || *head == NULL)
	return;

while (*head != NULL)
{
tmp = *head;
*head = (*(head))->next;
free(tmp);
}
*head = NULL;

}

