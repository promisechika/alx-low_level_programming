#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to search string
 * @c: character to search
 * Return: NULL or s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
