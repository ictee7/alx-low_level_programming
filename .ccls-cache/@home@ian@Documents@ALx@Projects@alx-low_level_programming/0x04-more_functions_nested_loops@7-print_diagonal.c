#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - Draws a diagonal line on the terminal
 *@n: Parameter to pass
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
