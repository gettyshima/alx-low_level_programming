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
	int half, len, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		half = len / 2;
		for (i = half; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		half = (len - 1) / 2;
		for (i = half + 1; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
