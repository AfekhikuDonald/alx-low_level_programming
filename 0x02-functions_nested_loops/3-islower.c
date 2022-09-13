#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 */
int _islower(int c)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
	{
		if (j == i)
		{
			return (1);
		}
		else if (j != i)
		{
			return (0);
		}
	}
}
