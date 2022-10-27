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
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}

		else if (s[i] == 32 || s[i] == 33 || s[i] == 9 ||
			 s[i] == 10 || s[i] == 46)
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
			else if (s[i] == 44 || s[i] == 59 || s[i] == 63 || s[i] == 34)
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
			else if (s[i] == 40 || s[i] == 41 || s[i] == 123 || s[i] == 125)
			{
				++i;
				if (s[i] >= 'A' && s[i] <= 'Z')
					s[i] = s[i] + 32;
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
