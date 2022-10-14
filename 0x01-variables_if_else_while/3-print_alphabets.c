#include <stdio.h>

/**
*main - Entry Point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char cha = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (cha <= 'Z')
	{
		putchar(cha);
		cha++;
	}

	putchar('\n');

	return (0);
}
