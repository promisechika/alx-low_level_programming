#include <stdio.h>
/**
 * main - functions to prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: always o
 */

int main(void)
{
	int sum = 0;
	int a;

	for (a = 0 ; a < 1024 ; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum = sum + a;
	}
	printf("%d\n", sum);
	return (0);
}
