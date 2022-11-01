#include "main.h"

/**
 *print_diagsums - Function that prints the sum of two diagonals of a matrix
 *@a: 1st parameter passed
 *@size: 2nd parameter passed
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int ar;
	int sum;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			sum = sum + a[i][j];
			ar = ar + a[i][size - j - 1];
	}
}
