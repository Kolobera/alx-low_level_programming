#include <stdio.h>

/**
 * main -Entry
 *
 * Return: Always 0
 */

int main(void)
{
	int ch;
	for (ch='a'; ch <= 'z'  && ch != 'q' && ch != 'e'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}