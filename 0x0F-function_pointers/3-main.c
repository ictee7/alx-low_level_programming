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
	int (*p)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first = atoi(av[1]);
	last = atoi(av[3]);

	p = get_op_func(av[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = p(first, last);
	printf("%d\n", res);
	return (0);
}
