#include <stdio.h>
#include <stdlib.h>

/**
 *main - Program that add positive numbers
 *@argc: First parameter passed
 *@argv: 2nd parameter passed
 *Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	int sum;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 || atoi(argv[i]) < 0)
		{
			if (*argv[i] != '0' || *argv[i] < '0')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + atoi(argv[i]);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
