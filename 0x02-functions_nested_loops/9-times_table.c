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
			if (mul < 10)
			{
				putchar(' ');
				putchar(mul + '0');
				if (j == 9)
					break;
				putchar(',');
				putchar(' ');
			}
			else if (mul >= 10)
			{
				putchar(mul / 10 + '0');
				putchar(mul % 10 + '0');
				if (j == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
