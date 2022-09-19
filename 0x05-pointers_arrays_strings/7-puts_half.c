#include "main.h"

/**
  *puts_half - prints the second half of the string
  *if number of character is odd, print last character
  *@str: character to be printed
  *
  *Return: void
  */

void puts_half(char *str)
{
	int i, j, k, l;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = 0; j < i; j++)
	{
		if (i % 2 == 0)
		{
			k = i / 2;
			_putchar(str[j + k]);
		}
		else if (i % 2 != 0)
		{
			l = i / 2 + 1;
			_putchar (str[j + l]);
		}
	}
	_putchar('\n');
}


