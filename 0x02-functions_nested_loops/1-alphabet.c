#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - Print Alphabet
 *
 *Return: Nothing
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
