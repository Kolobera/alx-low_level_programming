#include "main.h"

/**
* *_strncpy - a function that copies a string
* @dest: string
* @src: string
* @n: integer
* Return: string
**/

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (src[c] != '\0')
	{
		if (c < n)
		{
			dest[c] = src[c];
		}
		c++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
