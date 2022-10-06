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

	for (i = 0; s[i] != '\0'; i++)
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
	unsigned int size1, size2, size, i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = n;
	size = size1 + size2 + 1;

	s3 = (char *) malloc(sizeof(*s3) * size);

	if (s3 == NULL)
		return (NULL);
	if (n >= size2)
		n = size2;
	for (i = 0; s1[i] != '\0'; i++)
	{
		*(s3 + i) = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		*(s3 + i) = s2[j];
		i++;
	}
	*(s3 + i) = '\0';
	return (s3);
}
