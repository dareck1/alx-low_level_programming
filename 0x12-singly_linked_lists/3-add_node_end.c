#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add node at the end of list
 *
 * @head: head pointer to the lst
 * @str: string to put in the new node
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *element, *temp;
	size_t len = strlen(str);

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);
	element->str = strdup(str);
	element->len = len;
	element->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = element;
		return (element);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = element;
	return (element);
}
