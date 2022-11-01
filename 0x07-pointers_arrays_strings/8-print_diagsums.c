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
	int sum = 0;
	a = (int)a;

	for (i = 0; i < size; i++)
	{
		sum = sum + (a[i] + i);
	}
}
