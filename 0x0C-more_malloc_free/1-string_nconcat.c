#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat string
 * @s1: string
 * @s2: string
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, k, j;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	new = malloc(sizeof(s1) + n + 1);
	if (new == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new[i] = s1[i];
	if (strlen(s2) > n)
		j = n;
	else
		j = strlen(s2);
	for (k = 0; k < j; k++)
		new[i + k] = s2[k];
	return (new);
}
