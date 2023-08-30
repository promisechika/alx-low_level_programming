#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function that check if an integer is a prime number
 * @n: parameter function
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate if a prime number is recursive
 * @n: parameter function
 * @i: iterator
 * Return: 0 or 1
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
