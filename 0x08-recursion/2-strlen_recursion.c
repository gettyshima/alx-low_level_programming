#include "main.h"

/**
  *_strlen_recursion - returns lenght of a string
  *@s: string
  *
  *Return:lenght of the string
  */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len += 1;
		return (len += 1 * _strlen_recursion(s + 1));
	}

	return (0);
}
