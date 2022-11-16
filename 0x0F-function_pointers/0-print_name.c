#include "function_pointers.h"

/**
  *print_name - Function that prints a name
  *@name: parameter passed
  *@f: function passed
  *Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
