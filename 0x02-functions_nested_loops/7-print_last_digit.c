#include "main.h"
/**
 *print_last_digit - Entry Point
 *
 *@n: Parameter
 *Return: 0
 */


int print_last_digit(int n)
{
	if (n >= 0)
		n = n % 10;
	else
	{
		n = n * -1;
		n = n % 10;
	}
	_putchar(n + '0');
	return (n);
}
