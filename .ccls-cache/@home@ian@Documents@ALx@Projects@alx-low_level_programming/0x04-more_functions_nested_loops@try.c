#include <stdio.h>
#include <stdio.h>

int main(void)
{
	int num;
	int count;
	int lastPrime;
	num = 1231952;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			num = num / count;
		}
	}
	lastPrime = count - 1;
	printf ("%d\n", lastPrime);
	return (0);
}
