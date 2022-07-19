#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print list.
 * @h: list.
 * Return: The elements linked
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
