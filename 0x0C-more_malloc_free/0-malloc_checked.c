#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the number of bytes to allocate
 * Return: pointer or terminate the entire process with value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	return (ptr);
}
