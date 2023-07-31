#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * free_list - free all the nodes
 *
 * @head: pointer to the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;
	
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	head = NULL;
}
