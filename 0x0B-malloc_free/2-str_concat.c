#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	a = (char *)malloc(len1 + len2 + 1);

	if (a == NULL)
		return (NULL);
	strcpy(a, s1);
	strcat(a, s2);

	return (a);
}
