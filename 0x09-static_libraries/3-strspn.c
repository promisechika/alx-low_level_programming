#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to search string
 * @accept: pointer to the string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		length++;
		s++;
	}
	return (length);
}
