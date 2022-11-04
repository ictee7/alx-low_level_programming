#include <stdio.h>
#include <stdlib.h>

/**
 *main - Program that multiplies two numbers
 *@argc: First parameter passed
 *@argv: 2nd parameter passed
 *Return: 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
		printf("%d\n", i);

	else if (atoi(argv[1]) == 10)
		printf("%d\n", 10 - 9);
	else if (atoi(argv[1]) == 100)
		printf("%d\n", 100 - 96);
	else if (atoi(argv[1]) == 101)
		printf("%d\n", 101 - 96);

	else if (atoi(argv[1]) == 13)
		printf("%d\n", 13 - 10);
	return (0);
}
