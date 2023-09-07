#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = (int *)malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
