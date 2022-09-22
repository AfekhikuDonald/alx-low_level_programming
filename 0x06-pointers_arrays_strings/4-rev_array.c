#include "main.h"

/**
 * reverse_array - revers the content of an array of integers
 * @a: pointer to the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j, ch;

	i = j = 0;
	while (a[i])
	{
		i++;
	}
	for (j = n - 1; j >= n / 2; j--)
	{
		ch = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = ch;
	}
}
