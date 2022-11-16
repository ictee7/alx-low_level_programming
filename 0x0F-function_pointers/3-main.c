#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - Entry point
  *@ac: argument count
  *@av: argument vector
  *Return: 0
  */

int main(int ac, char **av)
{
	int first;
	int last;
	int res;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	else if (*av[2] != '+' || *av[2] != '-' || *av[2] != '*'
		 || *av[2] != '/' || *av[2] != '%')
	{
		printf("Error\n");
		exit(98);
	}
	else if ((*av[2] == '/'  && *av[3] == 0) || (*av[2] == '/'  && *av[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}

	else
	{
		first = atoi(av[1]);
		last = atoi(av[3]);
		res = get_op_func(av[2])(first, last);

		printf("%d\n", res);
	}
	return (0);
}
