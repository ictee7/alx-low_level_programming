#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - Function that creates an array of integers
 *@min: minimum value
 *@max: maximum value
 *Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *range;
	int i;
	int size;

	size = max - min + 1;

	range = malloc(sizeof(int) * (max - min + 1));

	if (range == 0)
		return (0);

	if (min > max)
		return (0);
	for (i = min; i <= size; i++)
		range[i] = i;
	return (range);
}
