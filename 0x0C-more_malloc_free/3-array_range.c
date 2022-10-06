#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the array if successful else
 *		returns null
 */
int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = (int *) malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min++;
	return (array);
}
