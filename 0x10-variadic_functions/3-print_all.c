#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>

void print_separator(int n, int len, const char * const string);

/**
  *print_all - prints anything
  *@format: list of types to be printed
  *Return: nothing
  */

void print_all(const char * const format, ...)
{
	int i, arg_count;
	char *str;
	va_list my_list;

	va_start(my_list, format);
	while (format == NULL)
		return;
	arg_count = strlen(format);
	i = 0;
	while (format != NULL && i < arg_count)
	{
		switch (format[i])
		{
			{ case 'c': printf("%c", va_arg(my_list, int)); }
				break;
			{ case 'i': printf("%d", va_arg(my_list, int)); }
				break;
			{ case 'f': printf("%f", va_arg(my_list, double)); }
				break;
			case 's':
				{
					str = va_arg(my_list, char *);
					if (str == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", str);
					break;
				}
		}
		print_separator(i, arg_count, format);
		i++;
	}
	printf("\n");
	va_end(my_list);
}

/**
  *print_separator - print the separator
  *@n: the iterator number
  *@len: lenght of string
  *@string: the string
  *Return: nothing
  */

void print_separator(int n, int len, const char * const string)
{
	if (string[n] && string && n < len - 1)
	{
		switch (string[n])
		{
			{ case 'c': printf(", "); }
				break;
			{ case 'i': printf(", "); }
				break;
			{ case 'f': printf(", "); }
				break;
			{ case 's': printf(", "); }
				break;
		}
	}
}
