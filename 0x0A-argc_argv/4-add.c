#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	
	for (i = 1 ; i < argc ; i++)
	{
		char *arg = argv[i];

		for (j = 0 ; arg[j] != '\0' ; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * is_positive_integer - check if a string is a positive integer
 * @s: string
 * Return: 1 or 0
 */

int is_positive_integer(char *s)
{
	if (*s == '\0')
		return (0);

	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}
