#include <stdio.h>

/**
 * main - prints all letters except q and e
 * Return: Always 0(success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		while (ch != 'e' && ch != 'q')
			putchar(ch);
	return (0);
}
