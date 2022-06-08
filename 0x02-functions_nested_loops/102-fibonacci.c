#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0
 */

int main(void)
{
	long a = 0;
	long b = 1;
	int c;
	long long s;

	for (c = 1; c <= 50; c++)
	{
		if (c <= 49)
		{
		s = a + b;
		if (s <= 0)
			printf("c  du zeub %d, %d", a, b);
		printf("%d, ", s);
		a = b; 
		b = s;
		}
		else if (c == 50)
			printf("%d\n", a + b);
	}
	return (0);
}
