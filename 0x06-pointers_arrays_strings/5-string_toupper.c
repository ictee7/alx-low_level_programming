#include "main.h"

/**
 *string_toupper - Function that changes all letters to uppercase
 *@str: string to convert to uppercase
 *Return: void
 */

char *string_toupper(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
		i++;
	len = i;

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 97 + 65;
	}
	return (str);
}
