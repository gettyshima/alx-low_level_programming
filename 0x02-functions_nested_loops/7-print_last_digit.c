#include "main.h"
/**
  *print_last_digit - prints the last digit of a number
  *@n: value of integer entered
  *@last_dig: value of last digit calculated
  *
  *Return: the last digit of the last digit
  */
int print_last_digit(int n)
{
	int last_dig;

	if (n < 0)
	{
		n = (-1) * n;
		last_dig = n % 10;
		_putchar(last_dig + '0');
	}
	else if (n >=0)
	{
		last_dig = n % 10;
		_putchar(last_dig + '0');
	}
	
	return (last_dig);
}
