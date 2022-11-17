#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_numbers - Function that prints numbers
  *@separator: string printed between numbers
  *@n: number of integers passed to the function
  *Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num;
	va_list ap;

	if (separator != NULL)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(ap, unsigned int);
			printf("%d", num);
			if (i < (n - 1))
				printf("%s", separator);
		}
	}
}
