#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the lenght of the string
 * @s: string
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
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer to the allocated block of memory else
 *		return null on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	s3 = (char *) malloc(sizeof(char) * (size1 + size2 + 1));

	if (s3 == 0)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(s3 + i) = *(s1 + i);
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(s3 + i) = *(s2 + j);
		i++;
	}
	return (s3);
	free(s3);
}
