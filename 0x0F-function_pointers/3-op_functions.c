#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
  *op_add - Function to add 2 numbers
  *@a: 1st number
  *@b: 2nd number
  *Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  *op_sub - Function to subtract 2 numbers
  *@a: 1st number
  *@b: 2nd number
  *Return: difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  *op_mul - Function to multiply 2 numbers
  *@a: 1st number
  *@b: 2nd number
  *Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  *op_div - Function to divide 2 numbers
  *@a: 1st number
  *@b: 2nd number
  *Return: division of a and b
  */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);

}
/**
  *op_mod - Function to return remainder
  *@a: 1st number
  *@b: 2nd number
  *Return: remainder of a divided by b
  */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
