#include "main.h"

/**
 * _strlen - return the lenght of a string
 * Return: the lenght
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
