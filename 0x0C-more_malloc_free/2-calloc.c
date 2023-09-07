#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of array members
 * @size: size of array
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
