/**
 *_abs - Entry Point
 *@n: Parameter
 *Return: 0 or 1
 */

#include "main.h"
int _abs(int n)
{
	if (n >= 0)
		return (n);
	n = n * -1;
	return (n);
}
