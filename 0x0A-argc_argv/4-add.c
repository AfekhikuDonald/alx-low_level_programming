#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if succesful, 1 if otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
			if (*(argv[i] + j) < 48 || *(argv[i] + j) > 57)
			{
			printf("Error\n");
			return (1);
			}
		}
	sum += atoi(argv[i]);
	}
	if (argc > 1)
	printf("%d\n", sum);
	return (0);
}
