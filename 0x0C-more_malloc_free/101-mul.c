#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_len - Finds the length of a string
 * @str: String to be measured
 * Return: lenght of string
 */

int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * create_xarray - creates array of chars and initialise with x
 * @size: size of arrray
 * Return: pointer
 */

char *create_xarray(int size)
{
	char *array;
	int ind;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);
	for (ind = 0; ind < (size - 1); ind++)
		array[ind] = 'x';
	array[ind] = '\0';
	return (array);
}

/**
 * add_zeros: add  zerosin a string
 * @str: string of nbs to be add
 * Return: pointer
 */

char *add_zeros(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_dig - converts char to int
 * @c: char to be converted
 * Return: int
 */

int get_dig(char c)
{
	int digit = c - '0';

	if (digit < 0  || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}

/**
 * get_prod - multiplies a string of nbs by a digit
 * @prod: tHE buffer to store the result
 * @mult: str of nbs
 * @digit: single digit
 * @zeros: necessary nb
 */

void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;
	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}
	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
		*prod  = (tens % 10) + '0';
}
/**
 * add_nums - Adds the nb stored in 2 str
 * @final_prod: buffer storing runnig final product
 * @next_prod: next product to be added
 * @next_len: lenght of next_prod
 */

void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;
	while (*(next_prod + 1))
		next_prod++;
	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		next_prod--;
		next_len--;
	}
	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		final_prod--;
		next_prod--;
	}
	if (tens)
		*final_prod = (tens % 10) + '0';
}
/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);			
	}
	if (*(argv[1]) == '0')
		argv[1] = add_zeros(argv[1]);

	if (*(argv[2]) == '0')
		argv[2] = add_zeros(argv[2]);

	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);
	for (index = find_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_dig(*(argv[2] + index));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
		putchar('\n');
	}
	free(next_prod);
	free(final_prod);
	return (0);
}
