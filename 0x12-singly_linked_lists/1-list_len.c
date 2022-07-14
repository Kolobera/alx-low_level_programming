#include "lists.h"

/**
 * list_len - print len of lk list
 * @h: lk list
 * Return: nb of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
