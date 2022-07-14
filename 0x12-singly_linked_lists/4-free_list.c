#include "lists.h"

/**
 * free_list - free lk list
 * @head: list
 * Return: None
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free_list(head->next);
	free(head->str);
	free(head);
}
