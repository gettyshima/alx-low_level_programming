#include "main.h"

/**
  *clear_bit - sets the value of a bit to 0 at a given index.
  *@n: the number
  *@index: the index
  *
  *Return: 1 on sucess
  *or -1 if an error occurred
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
