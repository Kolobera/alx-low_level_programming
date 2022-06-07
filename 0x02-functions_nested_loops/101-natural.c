#include <stdio.h>

/**
 * counti - count
 *
 * Return: 0
 */

void counti(void)
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
}
