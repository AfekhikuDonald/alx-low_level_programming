#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to be checked
 * @accept: character to be checked
 * Return: the number of bytes in s which consists of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (count);
}
