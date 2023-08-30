#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input number
 * Return: natural square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_recursive(n, 1, n));
	}
}

/**
 * sqrt_recursive - Recursive function to search for the natural square root
 * @n: input number
 * @i: to get the square root
 * @j: upper bound for binary search
 * Return: natural square root of the number
 */

int sqrt_recursive(int n, int i, int j)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n || i > j)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recursive(n, i + 1, j));
	}
}
