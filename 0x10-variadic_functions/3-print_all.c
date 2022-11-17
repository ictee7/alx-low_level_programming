#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_all - Function that prints all arguments
  *@format: list of arguments passed
  *Return: void
  */

void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;

	va_list ap;
	char *string;

	va_start(ap, n);

	for (i = 0; i < format; i++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
