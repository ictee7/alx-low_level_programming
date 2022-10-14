#include <stdio.h>

/**
*main - Entry Point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);

		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
			num++;
		}
	}
	putchar('\n');
	return (0);
}
