#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the lenght of a string
 * @s: string to be checked
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	unsigned int i;

	for ( i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: number of bytes
 * Return: pointer to newly allocated space if successful else
 *		return null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, size, j;
	char *s3;

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	size = size1 + size2 + 1;

	s3 = (char *) malloc(sizeof(s3) * size);

	if (s3 == NULL)
		return (NULL);
	if (n >= size2)
		s1[size1] = s2[size2];
	if (NULL)
		return "";
	for (j = 0; j < n - 1; j++)
	{
		s1[size1 + j] = s2[j];
		if (s2[j] == '\0')
			break;
	}
	s3 = s1;
	return (s3);
}
