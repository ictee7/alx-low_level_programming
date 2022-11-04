#include "main.h"

/**
 *_strchr - Function that locates a char in a string
 *@s: 1st parameter passed
 *@c: 2nd parameter passed
 *Return: pointer to 1st occurence of char or NULL
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
	}
	return ('\0');
}
