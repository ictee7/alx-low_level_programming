#include <stdio.h>
#include "3-calc.h"

/**
  *get_op_func - Function that selects operation to perform
  *@s: operator passed
  *Return: pointer to function
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	if (*s != '+' || *s != '-' || *s != '*' || *s != '/' || *s != '%')
		return (NULL);

	while (ops[i] != NULL)
	{
		return (i);
		i++;
	}
}
