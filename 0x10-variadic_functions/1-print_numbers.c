#include "variadic_functions.h"

/**
  *print_numbers - prints number followed by a newline
  *@separator: string to be printed between numbers
  *@n: the number of argument to be passed
  *
  *Return: nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ac;

	va_start(ac, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ac, int));
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ac);
}
