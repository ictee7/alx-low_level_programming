#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *str_concat - Function that concatenates two strings
 *@s1: 1st parameter passed
 *@s2: 2nd parameter passed
 *Return: pointer to the newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int size = s1_len + s2_len + 1;
	char *s = malloc(sizeof(char) * size);

	if (s1 == 0 || s2 == 0)
	{
		free(s1);
		return (0);
	}
	else
	{
		for (i = 0; i < s1_len; i++)
			s[i] = s1[i];

		for (i = 0; i < s2_len; i++)
			s[s1_len + i] = s2[i];
		s[size - 1] = '\0';
	}
	return (s);
	free(s);
}
