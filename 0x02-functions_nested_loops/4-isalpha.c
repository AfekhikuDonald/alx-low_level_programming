#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 */
int _isalpha(int c)
{
	int i;
	int j;
	if (i >= 65; i <= 90 && j >= 97; j <= 122)
	{
		return (1);
	}
	else if (i < 65; i > 90 && j < 97; j > 122)
	{
		return (0);
	}
}
