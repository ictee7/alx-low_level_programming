#include "main.h"

/**
  *more_numbers - Print numbers from 0 to 14
  *
  *Return: void
  */

void more_numbers(void)
{
	int j;
	j = 14;

	if (j > 9)
		_putchar((j / 10) + '0');
	_putchar('\n');
}
