#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the lenght of the string
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	unsigned int j;

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	return (j);
}

/**
 * _strdup - stores a copy of the given string and returns a pointer to it
 * @str:string to be copied
 * Return: returns null if the string is null
 *		returns a pointer to the copied string on success
 *		returns null if there is insufficient space
 */
char *_strdup(char *str)
{
	int i;
	unsigned int size;
	char *dup_str;

	if (str == NULL)
		return (NULL);
	size = _strlen(str) + 1;
	dup_str = (char *) malloc(sizeof(char) * size);
	if (dup_str == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		dup_str[i] = str[i];
	}
	return (dup_str);
	free(dup_str);
}
