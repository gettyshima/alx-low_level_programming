#include "main.h"

/**
  *_puts_recursion - prints string in reverse with newline
  *@s: string to be printed
  *
  *Return: nothing
  */

void _puts_recursion(char *s)
{
	if (!(*s))
		_putchar('\n');
	if (*s)
	{
		_putchar (*s);
		_puts_recursion(*s + 1);
	}
}
