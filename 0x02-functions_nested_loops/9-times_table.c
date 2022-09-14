#include "main.h"
/**
  *times_table - prints the 9 times table
  */
void times_table(void)
{
	char i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			if (j == 0)
			{
				_putchar('0');
				_putchar(' ');
			}
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar(mul + '0');
				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else if (mul >= 10)
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
