#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add two ints
 * @a: int
 * @b: int
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two ints
 * @a: int
 * @b: int
 * Return: substraction of a and b
 */

int op_sub( int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul two ints
 * @a: int
 * @b: int 
 * Return: result of multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div two ints
 * @a: int
 * @b: int
 * Return: the result of the division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gives the modulo of two ints
 * @a: int
 * @b: int
 * Return: 0 or 1
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b)
}
