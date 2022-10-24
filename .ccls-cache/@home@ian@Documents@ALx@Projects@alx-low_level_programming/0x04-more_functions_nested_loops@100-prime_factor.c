#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0 success
 */

int main(void)
{
	int count;
	long int num;
	int lastPrime;

	num = 612852475143;
	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			num = num / count;
		}
	}
	lastPrime = count - 1;
	printf("%d\n", lastPrime);
	return (0);
}
