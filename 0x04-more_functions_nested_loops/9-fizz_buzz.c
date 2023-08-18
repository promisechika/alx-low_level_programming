#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int c;

	for (c = 1 ; c <= 100 ; c++)
	{
		if ((c % 3 == 0) && (c % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (c % 3 == 0)
			printf("%s", "Fizz");
		else if (c % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", c);
		if (c != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
