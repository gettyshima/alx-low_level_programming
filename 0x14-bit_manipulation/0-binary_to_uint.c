#include "main.h"
#include "math.h"

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

/**
  *binary_to_uint - converts binary to unsigned int type
  *@b: the binary
  *
  *Return: the converted number
  *or 0 if there is one or more chars in the string
  *or 0 if b is NULL
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, converted_num = 0, dec = 0, rem = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	converted_num = (unsigned int)atoi(b);
	i = 0;
	while (converted_num != 0)
	{
		rem = converted_num % 10;
		converted_num /= 10;
		dec += rem * pow(2, i);
		++i;
	}
	return (dec);
}
