#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: parameter function 1
 * @s2: parameter function 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0 ; s1[n] != '\0' || s2[n] != '\0' ; n++)
	{
		if (s1[n] != s2[n])
		{
			if (s1[n] < s2[n])
				return (s1[n] - s2[n]);
			else if (s2[n] < s1[n])
				return (s1[n] - s2[n]);
		}
	}
	return (0);
}
