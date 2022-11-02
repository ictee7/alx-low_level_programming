#include "main.h"

/**
 *wildcmp - Function that compares two strings
 *@s1: 1st parameter passed
 *@s2: 2nd parameter passed
 *Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{

	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else if ((s1[0]) == (s2[0]) && (s1[0]) == ((s2 + 1)[0]))
		wildcmp(s1, ++s2);
	else if ((s1[0]) == (s2[0]) && (s2[0]) == ((s1 + 1)[0]))
		wildcmp(++s1, s2);
	else if ((s1[0]) == (s2[0]))
		wildcmp(++s1, ++s2);
	return (1);
}
