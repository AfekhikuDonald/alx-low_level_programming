#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to search for
 * Return: pointer to first occurence of the character
 * 		or null if the character is absent
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != c)
		{
			return (NULL);
		}
		else if (s[i] == c)
		{
			return (s[i]);
		}
	}
}
