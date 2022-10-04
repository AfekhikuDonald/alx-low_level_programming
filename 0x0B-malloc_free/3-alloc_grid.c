#include "main.h"
#include <stdlib.h>

/**
 * _alloc_grid - returns pointer to 2d array
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to the array if successful else
 *		return null
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		array[i] = malloc(sizeof(int) * width);
	if (array[i] == NULL)
		return (NULL);
	for (i = 0; j < width; j++)
		array[i][j] = 0;
	return (array);
}
