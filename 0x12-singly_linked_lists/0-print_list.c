#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: header of list
 *
 * Return: number of list
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t len = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		len++;
		temp = temp->next;
	}
	return (len);
}
