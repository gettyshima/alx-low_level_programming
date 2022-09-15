#include "main.h"

/**
  *print_line - prints straight line in a terminal
  *print newline if 0 or less is entered
  *@n: number of lines to be printed
  *
  *Return: void
  */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		if (!(n <= 0))
			_putchar('_');
	}
}
