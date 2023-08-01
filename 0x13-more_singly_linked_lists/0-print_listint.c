#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - print all the elements of listint
 *
 * @h: head of listint
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		len++;
		temp = temp->next;
	}
	return (len);
}
