#include "main.h"

/**
 *_memcpy - Function that copies memory area
 *@dest: 1st parameter passed
 *@src: 2nd parameter passed
 *@n: 3rd parameter passed
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
