#include "main.h"

/**
  *is_prime_number - checks of a number is prime
  *@n: the number
  *
  *Return: 1 if n is prime and 0 otherwise
  */

int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n < 2)
		return (0);
	if ((n % 2 != 0) && (n % 3 != 0))
	{
		if ((n % 5 != 0) && (n % 7 != 0))
			return (1);
		else
			return (0);
	}
	return (0);
}
