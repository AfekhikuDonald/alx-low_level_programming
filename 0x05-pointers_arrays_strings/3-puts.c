#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @*str: the string to be printed
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
