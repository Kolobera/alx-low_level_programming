#include "main.h"

#include <stdio.h>

/**
 * _strcpy - copies the string pointer, null byte, dest pointer
 * @dest: destiny
 * @src: font
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0, j = 0;

	for (; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';
	j++;
	return (dest);
}
