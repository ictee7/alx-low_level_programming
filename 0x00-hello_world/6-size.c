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

	printf("Size of a char : %d byte(s)\n", sizeof(c));
	printf("Size of an int : %d byte(s)\n", sizeof(i));
	printf("Size of a long int : %d byte(s)\n", sizeof(li));
	printf("Size of a long long int : %d byte(s)\n", sizeof(lli));
	printf("Size of a float : %d byte(s)\n", sizeof(fl));
	return (0);
}
