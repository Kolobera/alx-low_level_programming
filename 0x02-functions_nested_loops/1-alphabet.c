#include <stdio.h>
#include "main.h"

/**
 *main - Print Alphabet
 * 
 *Return: Nothing
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a', ch < 'z', ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
