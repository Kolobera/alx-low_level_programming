#include "main.h"
#include <stdlib.h>

/**
 * strdup - copy a string in another location
 * @str: string to copy
 */

char *_strdup(char *str)
{
	char *new;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		i++;
	i++;
	new = malloc(sizeof(char) * i);
	for (j = 0; j <= i; j++)
		new[j] = str[j];
	return (new);
}
