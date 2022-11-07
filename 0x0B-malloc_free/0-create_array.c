#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *create_array - Function that creates an array of chars
 *@size: size of array
 *@c: string passed
 *Return: pointer or null
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (str == 0)
	{
		printf("failed to allocate memory");
		return (0);
	}

	else
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	return (str);
	free(str);
}
