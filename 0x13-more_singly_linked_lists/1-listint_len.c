#include "lists.h"

/**
 * listint_len - return length of listint
 *
 * @h: head of listint
 *
 * Return: length
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
