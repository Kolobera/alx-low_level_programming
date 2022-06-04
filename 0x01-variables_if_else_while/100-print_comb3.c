#include <stdio.h>

/**
 *main - Entry
 *
 *Return: Always 0
 */

int main(void)
{
	int ch;
	int num;

	for (ch = 0; ch < 9; ch++)
	{
		for (num = ch+1; num <= 9; num++)
		{
			putchar(ch + '0');
			putchar(num + '0');
			if (ch*10+num != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
