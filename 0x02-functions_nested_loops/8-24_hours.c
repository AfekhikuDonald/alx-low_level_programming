#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i < 24; i++)
	{
		if (i < 10)
		{
			_putchar(i + '0');
			_putchar(':');
		}
		int j;
		for (j = 0; j < 60; j++)
			if (j < 10)
			{
				_putchar(j + '0');
				_putchar('\n');
			}
	}
}
