/**
*main - Entry Point
*
*Return: Always 0 (Success)
*/

#include <stdio.h>

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float fl;

	printf("Size of a char : %c byte(s)\n", sizeof(c));
	printf("Size of an int : %d byte(s)\n", sizeof(i));
	printf("Size of a long int : %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int : %zu byte(s)\n", sizeof(lli));
	printf("Size of a float : %zu byte(s)\n", sizeof(fl));
	return (0);
}
