#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to add
 * @src: source string
 * Return: concateneted string
 */

char *_strcat(char *dest, char *src)
{
	int c, i;

	for (c = 1; dest[c] != '\0'; c++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[c] = src[i];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
