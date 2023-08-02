#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free list
 *
 * @head: head of node
 *
 * Return: anything
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (temp != NULL)
	{
		temp = head;
		temp = temp->next;
		free(temp);
	}
}
