#include "function_pointers.h"

/**
  *print_name - prints a name
  *@name: name to be printed
  *@f: a function pointer containing a function
  *
  *Return: nothing
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
