#include <stdio.h>

/**
 * main - count
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int s = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			s=s+a;
		}
	}
	printf("%d\n", s);
	return (0);
}
