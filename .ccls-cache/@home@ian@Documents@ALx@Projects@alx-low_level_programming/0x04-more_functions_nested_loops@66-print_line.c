#include "main.h"

/**
  *print_line - Draws straight line in the terminal
  *@n: Parameter passed
  *Return: void
  */

void print_line(int n)
{
	int x;

	x = 0;

	if (n > 0)
	{
		while (x < n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');

	}

	else
		_putchar('\n');




}
