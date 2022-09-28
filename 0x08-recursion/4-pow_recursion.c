#include "main.h"

/**
  *_pow_recursion - ruturns the value of x raised to the power of y
  *@x: integer
  *@y: the power
  *
  *Return: -1 if y is less than 0, otherwise returns the value
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, (y - 1)));

	return (0);
}
