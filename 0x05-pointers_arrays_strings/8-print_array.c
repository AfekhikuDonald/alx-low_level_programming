#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @*a: input parameter
 * @n: input parameter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[index]);
		if (i == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}