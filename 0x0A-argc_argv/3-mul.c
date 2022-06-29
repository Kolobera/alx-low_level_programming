#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplier two int
 * @argc: int
 * @argv: array of strings
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int i = 1;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
