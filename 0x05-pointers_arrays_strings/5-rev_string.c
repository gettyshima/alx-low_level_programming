#include "main.h"

/**
  *rev_string - reverses a string
  *@s: string to be reversed
  *
  *Return: void
  */

void rev_string(char *s)
{
	int i, j;
	char p;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j < (i / 2); j++)
	{
		p = s[j];
		s[j] = s[(i - 1) - j];
		s[(i - 1) - j] = p;
	}
}
