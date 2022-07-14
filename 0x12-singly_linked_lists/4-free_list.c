#include "lists.h"

/**
 * free_lis - free lk list
 * @head: list
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free(head->next);
	free(head->str);
	free(head);
}
