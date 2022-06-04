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
	int nom;

	for (ch = 0; ch <= 9; ch ++)
	{
		for (num = 0; num <= 9; num++)
		{
			for (chi = 0; chi <= 9; chi++)
			{
				for (nom = 0; nom <= 9;nom ++)
				{
					if (ch * 10 + num < chi * 10 + nom)
					{
						putchar(ch + '0');                                  
						putchar(num + '0');
						putchar(' ');
						putchar(chi + '0');
						putchar(nom + '0');
						if (ch * 1000 + num *100 + chi * 10 + nom != 9899)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

