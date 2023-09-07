#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the number of bytes to allocate
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
