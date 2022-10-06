#include "main.h"
#include <stdlib.h>

/**
  *array_range - creates array of integers, creates from min - max inclusive
  *@min: the minimum value
  *@max: tge maximum value
  *Return: a pointer to tge newly created array
  *null on failure or if min > max
  */

int *array_range(int min, int max)
{
	int i, *arr, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
		arr[i] = (min + i);
	return (arr);
}
