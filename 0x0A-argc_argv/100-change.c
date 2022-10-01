#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum amount of coins to give
 * @argc: arguement count
 * @argv: arguement vector
 * Return:0(success)
 */
int main(int argc, char *argv[])
{
	int k, a, b, c, d, e, f, g, h, min;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	k = atoi(argv[1]);
	if (k < 0)
		printf("0\n");

	a = k / 25;
	b = k %25;
	c = b / 10;
	d = b % 10;
	e = d / 5;
	f = d % 5;
	g = f / 2;
	h = f % 2;
	min = a + c + e + g + h;
	if (k >= 0)
	printf("%d\n", min);
	return (0);
}
