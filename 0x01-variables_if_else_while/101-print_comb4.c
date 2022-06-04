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
	int chi;

	for (ch = 0; ch <= 7; ch++)
	{
		for (num = ch +1; num <= 8; num++)
		{
			for (chi = num + 1; chi <= 9;  chi++)
			{
				putchar(ch + '0');
				putchar(num + '0');
				putchar(chi + '0');
				if (ch * 100 + num * 10 + chi != 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
