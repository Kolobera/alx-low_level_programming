#include "calc.h"
#include <stdio.h>

/**
 * get_op_func - get operator
 * Return: result
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	
	while (i < 5)
	{
		if (*(ops[i].op) == *s && s[0] != '\0')
			return (ops[i].f);
		i++;
	}
	i = 0;
	return (0);
}
