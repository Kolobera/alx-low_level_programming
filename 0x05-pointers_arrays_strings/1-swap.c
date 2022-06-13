#include "main.h"

/**
 * swap_int : swap two ints
 * @a : first int
 * @b; second int
 * Return none
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
