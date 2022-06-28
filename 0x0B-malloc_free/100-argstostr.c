#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate args of a function
 * @ac: arg
 * @av: arg
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, n, k = 0, len = 0;
	char *new;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	new = malloc(sizeof(char) * len +1);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			new[k] = av[i][n];
			k++;
		}
		if (new[k] == '\0')
			new[k++] = '\n';
	}
	return (new)
}
