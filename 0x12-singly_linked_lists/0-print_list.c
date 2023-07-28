#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: list
 *
 * Return: the nomber of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t len = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		len++;
	}
	return (len);
}
