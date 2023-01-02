#include "search_algos.h"

/**
 * binary_search - implements binary search
 * @array: array to search in
 * @size: size of array
 * @value: value to search
 * Return: position
 */
int binary_search(int *array, size_t size, int value)
{
    size_t i, l=0, r=size - 1, m;

    if (!array)
        return (-1);
    printf("Searching in array: ");
    for (i = 0; i < size - 1; i++)
        printf("%d, ", array[i]);
    printf("%d\n", array[i]);
    while(l < r)
    {
        m = (int)((l + r) / 2);
        if (array[m] < value)
            l = m + 1;
        else if (array[m] > value)
            r = m - 1;
        else
            return m;
        printf("Searching in array: ");
        for (i = l; i < r; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);
    }
    return (-1);
}
