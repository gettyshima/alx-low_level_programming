#include "main.h"

/**
  *print_diagonal - draw diagonal  line in a terminal
  *print newline if 0 or less is entered
  *@n: number of lines to be printed
  *
  *Return: void
  */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (!(n <= 0))
		{
			for (j = (n + 1); j <= (j + n); j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

	_putchar('\n');
}
