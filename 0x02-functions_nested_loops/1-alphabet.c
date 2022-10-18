/**
 *print_alphabet - Entry Point
 *
 *Return: Always 0
 */
#include "main.h"

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
