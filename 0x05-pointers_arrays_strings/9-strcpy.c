#include "main.h"

/**
 *_strcpy - Function for copying string
 *@dest: 1st parameter passed
 *@src: 2nd parameter passed
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (src[i] != 0)
	{
		i++;
	}

	len = i;

	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = src[i];
	return (dest);
}
