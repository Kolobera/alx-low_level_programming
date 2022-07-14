#include "lists.h"

/**
 * add_node_end - add node at the end
 * @head: lk list
 * @str: strr
 * Return: list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new;
	list_t *endn;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		printf("Error\n");
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		endn = *head;
		while (endn->next)
			endn = endn->next;
		endn->next = new;
	}
	if (str == NULL)
	{
		new->str = 0;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		if (new->str == 0)
		{
			free(new);
			printf("Error\n");
			return (NULL);
		}
		for (i = 0; str[i];)
			i++;
		new->len = i;
	}
	new->next = NULL;
	return (new);
}
