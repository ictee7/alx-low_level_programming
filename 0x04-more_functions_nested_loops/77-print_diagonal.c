#include "main.h"

/**
 *print_diagonal - Draws a diagonal line on the terminal
 *@n: Parameter to pass
 */

void print_diagonal(int n)
{
	int row;
	int column;

	for (row = 1; row <= n; ++row)
	{
		for (column = 1 ; column <= row; ++column)
		{
			_putchar('*');
		}
		_putchar('\n');

	}

}
