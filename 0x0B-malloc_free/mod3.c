#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *argstostr - Function that concatenates arguments of program
 *@ac: argument count
 *@av: argument vector
 *Return: pointer to the new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i;
	int v = 0;

	char *s = (char *)malloc(v);

	if (s == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			s = (char *) realloc(s, strlen(av[i]));

			strcat(s, av[i]);
		}

	}
	return (s);
}
