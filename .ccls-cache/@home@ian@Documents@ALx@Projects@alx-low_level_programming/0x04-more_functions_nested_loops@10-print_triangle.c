#include "main.h"

/**
  *print_triangle - Function that prints a triangle
  *@size: parameter to pass
  *Return: void
  */

void print_triangle(int size)
{
	if (size >  0)
	{
		int i;
		int j;
		int k;

		for (i = 0; i < size; i++)
		{
			for (j = 1; j < (size - i); j++)
			{
				_putchar(' ');
			}

			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}

