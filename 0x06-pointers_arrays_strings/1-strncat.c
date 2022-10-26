#include "main.h"

/**
 *_strncat - Function that concatenates two strings
 *@dest: 1st parameter
 *@src: 2nd parameter
 *n: 3rd parameter
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int dest_len = 0;
	int src_len = 0;

	while (src[j] != '\0')
		j++;
	src_len = j++;

	while (dest[i] != '\0')
		i++;
	dest_len = i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	if (n > src_len)
	{
		dest[dest_len + i] = src[i];
		return (dest);
	}
	else
		return (dest);
}
