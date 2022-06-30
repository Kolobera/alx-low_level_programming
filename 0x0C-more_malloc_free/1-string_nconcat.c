#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concat string
 * @s1: string
 * @s2: string
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, k = 0;
	unsigned int j = 0;
	char *new;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	new = malloc(i + n + 1);
	if (new == NULL)
		return (NULL);
	while (s1[k])
	{
		new[k] = s1[k];
		k++;
	}
	while (j < n)
	{
		new[j + k] = s2[j];
		j++;
	}
	new[j + k] = '\0';
	return (new);
}
