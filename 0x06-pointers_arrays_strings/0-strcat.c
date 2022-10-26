#include "main.h"
/**
 *_strcat - Function that concatenates two strings
 *@dest: 1st parameter passed
 *@src: 2nd parameter passed
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int dest_len = 0;
	int src_len = 0;

	while (dest[j] != '\0')
		j++;
	dest_len = j;

	while (src[i] != '\0')
		i++;
	src_len = i;

	for (i = 0; i < src_len && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = src[i];
	return (dest);
}
