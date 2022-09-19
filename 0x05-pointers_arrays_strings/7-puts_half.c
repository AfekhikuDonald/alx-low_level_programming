#include "main.h"

/**
 * puts_half - prints half of a string
 * @*str: the character to be printed
 */
void puts_half(char *str)
{
	int i;
	int j;
	int n;

	i = 0;
	j = 0;
	while (str[i++])
	{
		j++;
	}
	if ((j % 2) == 0)
	{
		n = j / 2;
	}
	else
		n = (j + 1) / 2;

	for (i = n; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
