#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numb of args
 * @argc: int
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
