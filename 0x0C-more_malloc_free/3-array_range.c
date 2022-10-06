#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the array if successful else 
 *		rturns null
 */
int *array_range(int min, int max)
{
	int *array;
	int len;

	for (len = min; len <= max; len++)
	{
		return (len):
	}
	if (min > max)
		return (NULL);
	array = (int *) malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	return (array);
}
