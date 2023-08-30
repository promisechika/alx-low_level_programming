#include "main.h"

/**
 * _pow_recursion - returrns value of x raised to power of y
 * @x: parameter function 1
 * @y: parameter function 2
 * Return: result of x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
