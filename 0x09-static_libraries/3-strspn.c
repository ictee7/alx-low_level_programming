#include "main.h"

/**
 *_strspn - Function that gets the length of a prefix substring
 *@s: 1st parameter passed
 *@accept: 2nd parameter passed
 *Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
