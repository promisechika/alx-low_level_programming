#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to search string
 * @accept: pointer to the string
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
			return (s);
		s++;
	}
	return (NULL);
}
