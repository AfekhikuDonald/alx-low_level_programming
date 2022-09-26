#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be checked
 * @accept: the string to be checked for
 * Return: pointer to the byte s that matches the byte in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (0);
}
