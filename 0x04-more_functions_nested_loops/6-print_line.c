#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int n;
	int j;
	char i;

	i = '_';

	while n > 0
	{
		j = n * i;
		_putchar(j);
		_putchar('\n');
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
}
