#include "calc.h"
#include <stdio.h>

/**
 * main - main func
 * @argc: nb of args
 * @aargv: args passed
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	int a, b, result;
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	res = get_op_func(argv[2]);
	if (res == 0)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = res(a, b);
	printf("%d\n", result);
	return (0);
}
