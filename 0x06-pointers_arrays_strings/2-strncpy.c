#include "main.h"

/**
 *_strncpy - Function that copies a string
 *@dest: 1st parameter passed
 *@src: 2nd parameter passed
 *@n: 3rd parameter passed
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_len = 0;

	while (i != '\0')
		i++;
	src_len = i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	if (n > src_len)
	{
		dest[i] = src[i];
		return (dest);
	}
	else
		return (dest);
}
