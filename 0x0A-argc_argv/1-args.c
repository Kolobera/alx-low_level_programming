#include <stdio.h>
#include "main.h"

/**
 * main - print numb of args
 * @argc: int
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
