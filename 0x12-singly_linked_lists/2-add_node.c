#include "lists.h"

/**
 * add_node - add node at the begining of lk list
 * @head: node
 * @str: str
 * Return: list
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		printf("Error\n");
		return (NULL);
	}
	if (str == NULL)
	{
		new->str = 0;
		new->len = 0;
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			printf("Error\n");
			return (NULL);
		}
		for (i = 0; str[i];)
			i++;
		new->len = i;
		new->next = *head;
		*head = new;
		return (new);
	}
	return (NULL);
}
