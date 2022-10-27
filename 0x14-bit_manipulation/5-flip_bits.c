#include "main.h"

/**
  *flip_bits - returns the number of bits needed to flip 
  *to get from one number to another.
  *@n: first number
  *@m: second number
  *
  *Return: number of flips
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0, t1, t2;

	while (n > 0 || m > 0)
	{
		t1 = n & 1;
		t2 = m & 1;
		if (t1 != t2)
			flip++;
		n >>= 1;
		m >>= 1;
	}
	return (flip);
}


