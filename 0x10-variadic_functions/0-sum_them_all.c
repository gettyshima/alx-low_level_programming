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
	int sum = 0;
	unsigned int i;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
