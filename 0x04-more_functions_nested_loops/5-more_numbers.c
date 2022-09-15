#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 14)
	{
		for (j = 0; j <= 14; j++);
		{
			if (i >= 10)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		_putchar(j);
		_putchar('\n');
	}
	i++;
	_putchar('\n');
}
