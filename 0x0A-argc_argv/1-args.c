#include <stdio.h>

/**
 * main - prints the number of argumentspassed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc);

	return (0);
}
