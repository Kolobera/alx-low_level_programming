#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int c;
	int s;

	for (c = 1; c <= 50; c++)
	{
		if (c <= 49)
		{
		s = a + b;
		printf("%d, ", s);
		a = b; 
		b = s;
		}
		else
			printf("%d\n", a + b);
	}
	return (0);
}
