#include "function_pointers.h"
#include <stddef.h>
/**
  *print_name - Function that prints a name
  *@name: parameter passed
  *@f: function passed
  *Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
