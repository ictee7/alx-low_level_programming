#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *alloc_grid - Function that returns pointer to a 2D array
 *@width: 1st parameter passed
 *@height: 2nd parameter passed
 *Return: pointer to 2D array or null
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **array = (int **)malloc(height * sizeof(int *));

	if (array == NULL && width != 0  && height != 0)
	{
		free(array);
		return (0);
	}

	else
	{
		for (i = 0; i < height; i++)
			array[i] = (int *)malloc(width * sizeof(int));

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}

		}
		for (i = 0; i < height; i++)
			free(array[i]);
		free(array);

	}
	return (array);
}
