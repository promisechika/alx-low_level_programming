#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: parameter function
 */

void puts_half(char *str)
{
	int i, j, k = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		k++;
	j = (k - 1) / 2;
	for (i = j + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
