#include "main.h"

/**
  *more_numbers - Print numbers from 0 to 14
  *
  *Return: void
  */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 20; j++)
		{
			if (j == 10 || j == 12 || j == 13 || j == 14 || j == 16 || j == 18)
				j = 1;
			else if (j == 11)
				j = 0;
			else if (j == 15)
				j = 2;
			else if (j == 17)
				j = 3;
			else if (j == 19)
				j = 4;
			else if (j == 20)
				break;
			else
				_putchar(j + '0');
			_putchar(j + '0');
		}
		_putchar('\n');

	}
}
