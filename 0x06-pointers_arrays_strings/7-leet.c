#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: pointer to str
 */
char *leet(char *str)
{
	int i;
	int j;

	char c[10] = {'o', 'O', 'e', 'E', 'a', 'A', 't', 'T', 'l', 'L'}

	; char sw[10] = {'0', '0', '3', '3', '4', '4', '7', '7', '1', '1'};

	i = 0;
	j = 0;
	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j < 10; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = sw[j];
			}
		}
	return (str);
}
