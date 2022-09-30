#include <stdio.h>

/**
 * main - prints the number of argumentspassed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char* argv[])
{
	printf("%d\n", argc);
	printf("%s", argv[1]);
	
	return (0);
}
