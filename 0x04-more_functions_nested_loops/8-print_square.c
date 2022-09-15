#include "main.h"

/**
  *print_square - prints square using '#'
  *@size: number of square to be printed
  *
  *Return: void
  */

void print_square(int size)
{
	int i, j;

	if (!(n <= 0))
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
