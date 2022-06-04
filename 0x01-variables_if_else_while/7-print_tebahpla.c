#include <stdio.h>

/**
 *main - Entry
 *
 *Return: Always 0
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch -= 1)
		putchar(ch);
	putchar('\n');
	return (0);
}
