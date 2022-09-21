#include "main.h"

/**
 * _strcat - appends a string
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int l1, l2, i;

	l1 = l2 = 0;

	while (dest[l1])
		l1++;
	while (src[l2])
		l2++;
	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (dest);
}
