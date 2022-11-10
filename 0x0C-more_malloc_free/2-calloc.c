#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *_calloc - Function that allocates memory for an array using malloc
 *@nmemb: array elements
 *@size: size of array
 *Return: pointer to the allocated memory or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	str = malloc(nmemb * size);

	if (nmemb == 0)
		return (0);

	for (i = 0; i < nmemb; i++)
		str[i] = 0;
	return (str);
}
