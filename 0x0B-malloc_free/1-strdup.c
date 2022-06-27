#include "main.h"
#include <stdlib.h>

/**
 */

char *_strdup(char *str)
{
	char *new;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		i++;
	new = malloc(sizeof(char) * i);
	for (j = 0; j <= i; j++)
		new[j] = str[j];
	return (new);
}
