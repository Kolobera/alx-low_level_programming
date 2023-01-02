#include "search_algos.h"

/**
 * jump_search - implements jump search
 * @array: array to search in
 * @size: size of array
 * @value: value to search
 * Return: position
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 0;

	if (!array)
		return (-1);

	while (array[b] < value)
	{
		if (b == 1)
			b = 0;
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		a = b;
		b += sqrt(size);
		if (a >= size)
			return (-1);
		if (b > size - 1)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	while (array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a += 1;
		if (a >  size - 1)
			return (-1);
	}
	if (array[a] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		return (a);
	}
	else
		return (-1); 
}
