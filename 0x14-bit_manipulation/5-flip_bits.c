#include "main.h"

/**
 * flip_bits -  function that returns the number of bits
 * @n: parameter function 1
 * @m: parameter function 2
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int j = 0;

	while (i)
	{
		j += i & 1;
		i >>= 1;
	}
	return (j);
}
