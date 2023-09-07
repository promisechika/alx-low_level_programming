#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concatenate
 * Return: NULL or pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len, s2_len, result_len;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;
	result_len = s1_len + n;
	result = (char *)malloc(result_len + 1);

	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strncat(result, s2, n);
	return (result);
}
