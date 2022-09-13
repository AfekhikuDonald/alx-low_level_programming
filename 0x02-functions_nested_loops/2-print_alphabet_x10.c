#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
	}
	_putchar('\n');
}
