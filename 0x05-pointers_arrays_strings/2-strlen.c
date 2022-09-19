#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: the string to bve checked
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
