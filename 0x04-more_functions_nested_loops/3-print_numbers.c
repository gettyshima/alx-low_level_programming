#include "main.h"

/**
  * print_numbers - prints the numbers 0 to 9
  * followed by a newline
  */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
