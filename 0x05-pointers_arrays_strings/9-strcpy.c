#include "main.h"

/**
 * _strcpy -copies *src to *dest
 * @dest: destination address
 * @src: source address
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
