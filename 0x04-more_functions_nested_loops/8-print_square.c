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

	if (!(size <= 0))
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
