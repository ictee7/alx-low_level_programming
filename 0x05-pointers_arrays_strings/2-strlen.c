#include "main.h"

/**
 *_strlen - Function that returns length of sring
 *@s: parameter passed
 *Return: count
 */

int _strlen(char *s)
{
	int i;
	int count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
