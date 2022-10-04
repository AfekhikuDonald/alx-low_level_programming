#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a previously allocated block of memory
 * @grid: grid to be freed
 * @height: height of the grid
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	return (free(grid));
}
