#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1, l2, i;

	l1 = l2 = 0;

	while (dest[l1])
	{
		l1++;
	}
	while (src[l2])
	{
		l2++;
	}
	for (i = 0; i <= n - 1; i++)
	{
		dest[l1 + i] = src[i];
		if (src[i] == '\0')
			break ;
	}
	return (dest);
}
