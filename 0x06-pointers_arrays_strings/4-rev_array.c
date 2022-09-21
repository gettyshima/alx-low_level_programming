#include "main.h"

/**
  *reverse_array - reverses array of integers
  *@a: arrayof integers
  *@n: number of element in the array
  *
  *Return: void
  */

void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = temp;
	}
}
