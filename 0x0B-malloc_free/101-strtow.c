#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * words - count the number of words
 * @str: string
 * Return: count
 */
int words(char *str)
{
	int count = 0, flag = 0;

	while (*str)
	{
		if (*str != ' ')
			flag = 1;
		else if (flag == 1)
		{
			count++;
			flag = 0;
		}
		str++;
	}
	return (count);
}

/**
 * _strlen - Find the lenght of a string
 * @s: String
 * @i: Position
 * Return: The lenght
 */
int _strlen(char *s, int i)
{
	int count = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * _strcpy - Copy elements from a string to another.
 * @s: String.
 * @i: Position.
 * @tmp: Array where it's saved.
 * Return: The array whit the elements.
 */

char *_strcpy(char *s, int i, char *tmp)
{
	int j;

	for (j = 0; s[i] != ' ' && s[i] != '\0'; i++, j++)
	{
		tmp[j] = s[i];
	}
	tmp[j] = '\0';
	return (tmp);
}

/**
 * strtow - split string into words
 * @str: string
 * Return: words
 */

char **strtow(char *str)
{
	char **new;
	int i = 0, j = 0, pos, t;

	if (str == NULL || strcmp(str, "") || (words(str) == 0))
		return (NULL);
	new = malloc(sizeof(int *) * (words(str) + 1));
	if (new == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ')
		{
			pos = _strlen(str, i);
			new[j] = malloc(sizeof(char) * (pos + 1));
			if (new[j] == NULL)
			{
				for (t = j; t >= 0; t--)
					free(new[t]);
				free(new);
				return (NULL);
			}
			_strcpy(str, i, new[j]);
			j++;
			i += pos;
		}
		else
			i++;
	}
	new[j] = NULL;
	return (new);
}
