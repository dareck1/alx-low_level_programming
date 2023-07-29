#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - add node to the list
 *
 * @head: head of the list
 * @str: the string
 *
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *Li;

	int len = strlen(str);
	Li = malloc(sizeof(list_t));
	if (Li == NULL)
		return (NULL);
	Li->str = strdup(str);
	Li->len = len;
	Li->next = (*head);
	(*head) = Li;
	return (*head);
