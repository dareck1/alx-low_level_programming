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
	list_t *element;

	while (head)
	{
		element = head->next;
		free(head->str);
		free(head);
		head = element;
	}
}
