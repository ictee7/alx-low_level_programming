#include "main.h"

/**
 *reverse_array - Function that reverses the content of an array
 *@a: an array of integers
 *@n: the number of elements to pass
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
