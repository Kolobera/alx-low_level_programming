#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - print 10 times alphabet
 *
 *Return: None
 */

void print_alphabet_x10(void)
{
	int i;
	int ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
