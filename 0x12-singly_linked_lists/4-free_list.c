#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list -add node to list.
 *Description: Function that frees a list_t list
 * @head: pointer to a pointer
 * Return: void.
 **/



void free_list(list_t *head)
{

list_t  *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}

}

