#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that return the number of elements in a linked list
 *
 * @h: head of list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
