#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: parameter function
 * Return: length of string
 */

int _strlen(char *s)
{
	int a;
	int b = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		b++;
	return (b);
}
