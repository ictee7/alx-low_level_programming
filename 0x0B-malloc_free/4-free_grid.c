#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *free_grid - Function that frees a 2D array
 *@grid: 1st parameter passed
 *@height: 2nd parameter passed
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
