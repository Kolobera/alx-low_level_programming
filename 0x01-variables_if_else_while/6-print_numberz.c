#include <stdio.h>

/**
 *main - Entry
 *
 *Return: Always 0
 */

int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
		putchar(ch + '0');
	putchar('\n');
	return (0);
}
