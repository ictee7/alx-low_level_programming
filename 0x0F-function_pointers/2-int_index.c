#include "function_pointers.h"
#include <stddef.h>

/**
  *int_index - Function that searches for an integer
  *@array: the array passed
  *@size: size of array
  *@cmp: function passed
  *Return: index of the first element
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == 98)
			break;
		if (array[i] == -98)
			return(i);
		cmp(array[i]);
	}
	return (i);
}
