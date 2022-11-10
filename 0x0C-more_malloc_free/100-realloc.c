#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_realloc - Function that reallocates a memory block using malloc
 *@ptr: 1st parameter passed
 *@old_size: 2nd parameter passed
 *@new_size: 3rd parameter passed
 *Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	ptr = malloc(old_size);

	if (new_size > old_size)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	if (ptr == 0)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != 0)
		free(ptr);
	return (ptr);
}
