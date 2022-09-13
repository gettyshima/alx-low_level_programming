#include "main.h"
/**
  *print_last_digit - prints the last digit of a number
  *@n: value of integer entered
  *
  *Return: the last digit of the last digit
  */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		n = n % 10;
		_putchar(n + '0');
	}
	else if (n >= 0)
	{
		n = n % 10;
		_putchar(n + '0');
	}
	else if (n == -2147483648)
	{
		n--;
		_putchar(n + '0');
	}
	return (n);
}
