#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node at end
 *
 * @head: head of list
 * @n: data integer
 *
 * Return: newnode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	temp = (*head);
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (*head);
}

