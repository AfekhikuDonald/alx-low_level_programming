#include <stdio.h>

/**
 * main - prints the name of the program
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	printf("%s", argv[argc - 1]);
	return (0);
}
