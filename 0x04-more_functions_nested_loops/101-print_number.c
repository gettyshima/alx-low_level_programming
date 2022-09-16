#include "main.h"

/**
  *print_number - print interger
  *@n: value to be printed
  *Return: void
  */

void print_number(int n)
{
	unsigned int m;

	if (n < 0) /*convert negative int*/
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;

	if (m / 10) /*remove the last digit*/
		print_number(m / 10); /*recurse*/

	_putchar(m % 10 + '0'); /*print last dig*/
}

