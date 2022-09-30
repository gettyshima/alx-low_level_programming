#include "main.h"

/**
  * _isdigit - checks for a digit from 0 through 9
  * @c: digit to be checked
  *
  * Return: 1 if c is a digit and 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
