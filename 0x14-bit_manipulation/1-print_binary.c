#include "main.h"

/**
  *print_binary - prints the binary representation of a number
  *@n: the number
  *
  *Return: nothing
  */

void print_binary(unsigned long int n)
{
	unsigned long int con;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n > 1)
	{
		print_binary(n >> 1);
		con = n & 1;
		_putchar(con + '0');
	}

}
