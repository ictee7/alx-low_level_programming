#include "main.h"

/**
 *rev_string - Function that reverses string
 *@s: Parameter passed
 *Return: void
 */

void rev_string(char *s)
{
	int j;
	int i = 0;
	int len = 0;
	char temp = 0;

	while (s[i] != 0)
	{
		i++;
	}

	len = i;

	for (j = 0; j < len / 2; j++)
	{
		temp = s[j];
		s[j] = s[len - 1 - j];
		s[len - 1 - j] = temp;
	}
}
