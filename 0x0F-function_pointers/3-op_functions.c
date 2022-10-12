#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  *op_add - adds two numbers
  *@a: first num
  *@b: second num
  *
  *Return: sum of both numbers
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - subtracts two numbers
  *@a: first num
  *@b: second num
  *
  *Return: sub of both numbers
  */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
  *op_mul - multiplies two numbers
  *@a: first num
  *@b: second num
  *
  *Return: multiplicstion of both numbers
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - divides two numbers
  *@a: first num
  *@b: second num
  *
  *Return: division of both numbers
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
  *op_mod -remainder of the division two numbers
  *@a: first num
  *@b: second num
  *
  *Return: remainder of both numbers
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
