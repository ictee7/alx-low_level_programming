#include "main.h"

/**
 *_memset - Function that feels the memory with a constant byte
 *@s: First parameter to be passed
 *@b: 2nd parameter to be passed
 *@n: 3rd parameter to be passed
 *Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
