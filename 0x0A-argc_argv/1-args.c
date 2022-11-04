#include <stdio.h>

/**
 *main - Program to print the number of arguments passed
 *@argc: First parameter passed
 *@argv: 2nd parameter passed
 *Return: 0
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
