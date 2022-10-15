#include <stdio.h>
/**
  *main - Entry Point
  *
  *Return: Alaways 0 (Success)
  */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '0')
			j = '1';
		else if (i == '1')
			j = '2';
		else if (i == '2')
			j = '3';
		else if (i == '3')
			j = '4';
		else if (i == '4')
			j = '5';
		else if (i == '5')
			j = '6';
		else if (i == '6')
			j = '7';
		else if (i == '7')
			j = '8';
		else if (i == '8')
			j = '9';
		else
			break;
		for (; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
