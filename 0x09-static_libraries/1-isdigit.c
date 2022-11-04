/**
  *_isdigit - Checks if number is digit or not
  *@c: Parameter to pass
  *Return: 0 or 1
  */

#include "main.h"

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

