#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal
 * @n:  number of times the character '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a, b;

		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b <= a ; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
