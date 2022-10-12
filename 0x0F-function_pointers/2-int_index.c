#include "function_pointers.h"

/**
  *int_index - searches for an integer
  *@array: name of array
  *@size: number of elements element
  *@cmp: pointer to a function that is used to compare
  *
  *Return: -1 if no element matches or size <= 0
  *index of first element where cmp != 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
