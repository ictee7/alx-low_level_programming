#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *_strdup - Function that returns a pointer to a newly allocated space
 *@str: string passed
 *Return: pointer to duplicated string or null
 */

char *_strdup(char *str)
{
	char *p_str = malloc(strlen(str) + 1);

	if (str == NULL || p_str == NULL)
	{
		free(p_str);
		return (0);
	}
	else
		strcpy(p_str, str);

	return (p_str);
	free(p_str);
}
