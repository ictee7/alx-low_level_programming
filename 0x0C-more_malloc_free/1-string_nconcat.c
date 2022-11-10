#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
 *string_nconcat - Function that concatenates two strings.
 *@s1: destination string
 *@s2: source string
 *@n: size
 *Return: pointer to the newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1_len = strlen(s1);
	unsigned int size = s1_len + n + 1;
	char *s = malloc(sizeof(char) *size);

	if (s == NULL)
	{
		free(s1);
		return (0);
	}

	else
	{
		for (i = 0; i < s1_len; i++)
			s[i] = s1[i];
		for (i = 0; i < n; i++)
			s[s1_len + i] = s2[i];
		s[size - 1] = '\0';
	}
	return (s);
}

