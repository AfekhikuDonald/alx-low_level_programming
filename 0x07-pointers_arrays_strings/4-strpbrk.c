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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s[i]);
			}
		}
	}
	return (0);
}
