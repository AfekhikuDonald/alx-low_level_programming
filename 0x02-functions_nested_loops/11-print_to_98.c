#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 */
void print_to_98(int n)
{
	int n;

	if (n < 98)
	{
		_putchar(n);
		n++;
	}
	else if (n > 98)
	{
		_putchar(n);
		n--;
	}
}
