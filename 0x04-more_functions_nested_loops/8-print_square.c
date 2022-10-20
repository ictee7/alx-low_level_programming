#include "main.h"

/**
  *print_square - Function that prints square
  *@size: Parameter passed
  *Return: void
  */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
			_putchar('\n');
		else
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');

			}
		}
		_putchar('\n');
	}
}
