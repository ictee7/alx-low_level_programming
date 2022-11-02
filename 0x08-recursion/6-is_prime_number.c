#include "main.h"

/**
 *is_prime_number - Function that calculates prime numbers
 *@n: parameter passed
 *Return: 1 or -1 or value x raised to the power y
 */
int is_prime_number(int n)
{

	if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else
		return (is_prime_number(3 - 1));
}
