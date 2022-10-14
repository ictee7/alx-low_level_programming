#include <stdio.h>

/**
*main - Entry Point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int ch = '0';
	int num = '9';

	while (ch <= num)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
