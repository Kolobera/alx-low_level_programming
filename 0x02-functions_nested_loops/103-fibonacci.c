#include <stdio.h>

/**
 * main - fibo even
 *
 * Return: 0
 */

int main(void)
{
	long a = 0;
	long b = 1;
	long s = 0;
	long d = 0;

	while (s < 4000000)
	{
		if (b % 2 == 1)
		{
			d += b;
		}
		s = a + b;
		a = b;
		b = s;
	}
	printf("%ld\n", d);
	return (0);
}
