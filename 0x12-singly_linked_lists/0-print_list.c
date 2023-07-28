#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * isEmpty - check the list if is empty
 *
 * @h: list to check
 *
 * Return: 0 or 1
 */

int isEmpty(const list_t *h)
{
	return (h == NULL);
}

/**
 * lenList - length of a string
 *
 * @h: lists
 *
 * Return: length
 */
int lenList(const list_t *h)
{
	int length = 0;

	if (isEmpty(h))
		return (length);
	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}

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

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] (nil)", 0);
		printf("[%d] %s", temp->len, temp->str);
		temp = temp->next;
		printf("\n");
	}
	return (lenList(h));
	printf("\n");
}
