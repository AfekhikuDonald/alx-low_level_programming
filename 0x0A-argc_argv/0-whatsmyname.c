#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv:argument vector
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
