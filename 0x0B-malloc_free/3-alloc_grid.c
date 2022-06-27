#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2 dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: Array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof (int *) * heigth);
	if (arr == NULL)
		return (NULL);
	for(i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		arr[i][j] = 0;
	return (arr);
	free(arr);
}
