#include "main.h"
/**
  *print_sign - prints sign of a number
  *@n: any integer passed
  *
  *Return: 1 and prints "+" if n is > 0
  *or returns 0 and prints "0" if n is 0
  *or returns -1 and prints "-" if n is less than 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	return (0);
}
