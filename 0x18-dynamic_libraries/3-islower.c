/**
 *_islower - Entry Point
 *@c: Parameter
 *Return: 0 or 1
 */
#include "main.h"

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

