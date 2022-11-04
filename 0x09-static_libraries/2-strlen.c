#include "main.h"

/**
 *_strlen - Function that returns length of sring
 *@s: parameter passed
 *Return: count
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
