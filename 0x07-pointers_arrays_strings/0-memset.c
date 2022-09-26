#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: original string
 * @b: bytes to be filled in
 * @n: number of bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	unsigned char *content, original;

	content = b, original = s;

	for (i = 0; i < n; i++)
	{
		original[i] = content;
	}
	return (original);
}
