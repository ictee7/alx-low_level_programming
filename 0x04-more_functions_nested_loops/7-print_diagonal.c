#include "main.h"

/**
 *print_diagonal - Draws a diagonal line on the terminal
 *@n: Parameter to pass
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
