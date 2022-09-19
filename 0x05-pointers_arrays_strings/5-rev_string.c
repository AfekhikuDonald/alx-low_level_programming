#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int c;
	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (int j = 0; j < c / 2; j++)
	{
		int temp = s[j];
		s[j] = s[c - j - 1];
		s[c - j - 1] = temp;
	}
}
