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

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(temp);
	}
}
