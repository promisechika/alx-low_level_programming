#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number
 * @b: pointer to string
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int result = 0;

	if (!b)
		return (0);
	for (a = 0 ; b[a] ; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		result = 2 * result + (b[a] - '0');
	}
	return (result);
}
