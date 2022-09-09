#include <stdio.h>

/**
 * main - prints the alphabets in lowercase and uppercase
 * Return: 0(success)
 */
int main(void)
{
	char ch, CH;
	for (ch = 'a'; ch <= 'z'; ch++);
	for (CH = 'A'; CH <= 'Z'; CH++);
	putchar(ch);
	putchar('\n');
	putchar(CH);

	return(0);
}
