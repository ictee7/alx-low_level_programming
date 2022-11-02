#include "main.h"

/**
 *_pow_recursion - Function that returns the power of a number
 *@x: 1st parameter passed
 *@y: 2nd parameter passed
 *Return: 1 or -1 or value x raised to the power y
 */
int _pow_recursion(int x, int y)
{

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
