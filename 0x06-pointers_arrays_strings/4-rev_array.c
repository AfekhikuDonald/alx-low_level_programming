#include "main.h"

/**
 * reverse_array - revers the content of an array of integers
 * @a: pointer to the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	char ch;

	i = j = 0;
	while (a[i])
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		ch = a[j];
		a[j] = a[i - 1 - j];
		a[i - 1 - j] = ch;
	}
	return (a);
}
