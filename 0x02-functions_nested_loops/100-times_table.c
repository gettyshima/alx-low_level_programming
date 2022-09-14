#include "main.h"
/**
  *print_times_table - prints n times tables, starting from 0
  *@n: the number of multiplication
  *
  *Return: void
  */
void print_times_table(int n)
{
	int i, j, mul;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (!(n > 15 || n < 0))
			{
				mul = j * i;
				if (j == 0)
				{
					_putchar('0');
					_putchar(',');
					_putchar(' ');
				}
				else if (mul < 10)
				{
					_putchar(' ');
					_putchar(mul + '0');
					if (j == n)
						break;
					_putchar(',');
					_putchar(' ');
				}
				else if (mul >= 10 && mul < 100)
				{
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
					if (j == n)
						break;
					_putchar(',');
					_putchar(' ');
				}
				else if (mul >= 100)
				{
					_putchar(mul / 100 + '0');
					_putchar((mul % 100) / 100 + '0');
					_putchar((mul % 100) % 10 + '0');
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}
