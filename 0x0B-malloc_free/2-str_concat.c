#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *str_concat - Function that concatenates two strings
 *@s1: 1st parameter passed
 *@s2: 2nd parameter passed
 *Return: pointer to duplicated string or null
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char * dest_len = malloc(strlen(s1));
	char * src_len = malloc(strlen(s2));

	if (s2 == NULL)
	{
		free(s1);
		return (0);
	}
	else
	{
		for (i = 0; i < *src_len && s2[i] != '\0'; i++)
			s1[*dest_len + i] = s2[i];
		s1[*dest_len + i] = s2[i];
	}
	return (s1);
	free(s1);
}
