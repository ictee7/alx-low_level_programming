#include "main.h"
/**
 *cap_string - Fuction that capitalizes first letters of a string
 *@s: string to be passed
 *Return: void
 */
char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i]  != '\0'; i++)
	{
		if (s[0] >= 'a' && s[i] <= 'z')
		{
			s[0] = s[0] - 32;
			continue;
		}
		else if (s[i - 1] == 32 || s[i - 1] == 33 || s[i - 1] == 9 ||
			 s[i - 1] == 10 || s[i - 1] == 46)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
		else if (s[i - 1] == 44 || s[i - 1] == 59 ||
			 s[i - 1] == 63 || s[i - 1] == 34)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
		else if (s[i - 1] == 40 || s[i - 1] == 41 ||
			 s[i - 1] == 123 || s[i - 1] == 125)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 32;
		}
	}
	return (s);
}
