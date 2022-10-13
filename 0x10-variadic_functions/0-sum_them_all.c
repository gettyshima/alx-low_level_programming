#include <stdarg.h>
#include "variadic_functions.h"

/**
  *sum_them_all - sums all parameters
  *@n: number argument that will always be passed
  *
  *Return: sum of all parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0, i;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
}
