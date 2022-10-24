#include "main.h"

/**
 *swap_int - Function that swaps the values of two integers
 *@a: 1st parameter passed
 *@b: 2nd parameter passed
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
