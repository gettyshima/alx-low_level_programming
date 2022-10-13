#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  *print_strings - prints
  *@separator: string to be printed after each character
  *@n: the number of argument to be passed
  *
  *Return: Nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ac;
	char *str;

	va_start(ac, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(ac, char *);
			printf("%s", (str == NULL) ? "(nil)" : str);
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(ac);
}
