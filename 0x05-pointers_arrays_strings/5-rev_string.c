#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 * Return: None
 */
void rev_string(char *s)
{
	int c;
	int i;
	char mot[];

	for (c = 0; s[c] != '\0'; c++)
	{
		mot[c] = s[c];
	}
	for (i = c - 1; i >= 0; i--)
	{
		*s[i] = mot[c - 1 - i]
	}
}
