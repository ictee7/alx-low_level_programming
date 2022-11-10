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
	void *type;

	type = malloc(b);

	if (type == NULL)
		exit(98);

	else
		return (type);
}
