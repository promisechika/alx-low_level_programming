#include "main.h"
/**
 * _abs - functions that compute the absolute value of an integer
 * @i: function parameter
 * Return: -i or i
 */

int _abs(int i)
{
	if (i < 0)
		return (-i);
	else if (i >= 0)
	{
		return (i);
	}
	return (0);
}
