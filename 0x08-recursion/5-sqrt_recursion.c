#include "main.h"

/**
  *_sqrt_checker - checks the actual square root
  *@n: the number
  *@x: number for test
  *
  *Return: -1 if n doesn't have a natural square root
  */

int _sqrt_checker(int x, int n)
{
	if ((x * x) == n)
		return (x);
	if ((x * x) > n)
		return (-1);
	return (_sqrt_checker((x + 1), n));
}

/**
  *_sqrt_recursion - returns the square rooy of a number
  *@n: the number
  *
  *Return: -1 if n doesn't have a natural square root
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_checker(0, 1));
}
