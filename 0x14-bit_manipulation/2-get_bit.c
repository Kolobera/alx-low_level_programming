#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: numb to convert
 * @index: index of bit
 * Return: byte in the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8) - 1)
		return (-1);
	return ((n >> index) & 1);

}
