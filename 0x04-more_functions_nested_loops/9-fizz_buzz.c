#include <stdio.h>

/**
 * main - fizzbuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int ch;

	for (ch = 1; ch <= 100; ch++)
	{
		if (ch % 3 == 0)
			printf("Fizz ");
		else if (ch % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", ch);
	}
	return (0);
}
