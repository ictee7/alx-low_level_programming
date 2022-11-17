#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_strings - Function that prints numbers
  *@separator: 1st parameter passed
  *@n: number of strings passed to the function
  *Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
			printf("(nil)");

		printf("%s", string);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
