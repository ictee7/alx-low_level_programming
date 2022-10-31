#include "main.h"

/**
 *_strstr - Function that locates a substring
 *@haystack: 1st parameter passed
 *@needle: 2nd parameter passed
 *Return: pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int len;

	while (haystack[i])
		i++;
	len = i;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; i < len; i++)
	{
		if (*(haystack + i) == *needle)
		{
			char *ptr = _strstr(haystack + i + 1, needle + 1);

			return ((ptr) ? ptr - 1 : '\0');
		}
	}
	return ('\0');
}
