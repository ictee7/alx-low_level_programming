#include <stddef.h>
#include "function_pointers.h"

/**
  *array_iterator - Function that executes a function
  *@array: 1st parameter
  *@size: 2nd parameter
  *@action: function passed
  *Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
