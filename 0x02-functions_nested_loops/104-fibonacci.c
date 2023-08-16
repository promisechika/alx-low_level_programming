#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: always 0
 */

int main(void)
{
	unsigned int i;
	unsigned long int a, b, c;

	a = 1;
	b = 2;

	printf("%lu, %lu", a, b);

	for (i = 2 ; i = 98 ; ++i)
	{
		c = a + b;

		printf(", ");

		unsigned long int temp = c;
		unsigned long int divisor = 1000000000;

		while (divisor > 0)
		{
			printf("%lu", temp / divisor);
			temp %= divisor;
			divisor /= 10;
		}

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
