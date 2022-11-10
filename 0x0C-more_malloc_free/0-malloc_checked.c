#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*malloc_checked - Function that allocates memory using malloc
*@b: parameter passed
*Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *type;
	type = malloc(sizeof(*type) * b);

	if (type == NULL)
		return(98);

	else
		return(type);
}
