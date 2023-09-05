#include "main.h"

/**
 * _strdup - function that returns a pointer
 * @str: string to duplicate
 * Return: pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *a;

	if (str == NULL)
		return (NULL);
	a = (char *)malloc((strlen(str) + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);
	strcpy(a, str);
	return (a);
}
