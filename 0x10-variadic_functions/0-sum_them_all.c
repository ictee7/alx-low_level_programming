#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all - Function that returns the sum of all its parameters
  *@n: named parameter
  *Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum = 0;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(ap, unsigned int);
		}
		va_end(ap);
		return (sum);
	}
	return (0);
}
