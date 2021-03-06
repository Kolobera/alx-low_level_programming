#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: string to concat
 * @s2: string to concat
 * Return: Null or new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, c;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	j++;

	new = malloc(sizeof(char) * (i + j));
	if (new == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		new[c] = s1[c];
	for (c = 0; c < j; c++)
		new[i + c] = s2[c];
	return (new);
	free(new);
}
