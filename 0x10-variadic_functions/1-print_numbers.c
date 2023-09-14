#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers
 * @separator: the string
 * @n: number of integers
 * @...: integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
