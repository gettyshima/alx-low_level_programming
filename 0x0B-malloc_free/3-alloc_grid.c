#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - returns a pointer to a 2d array
  *@width: width of the array
  *@height: height of the array
  *
  *Return: pointer to the array, NULL if failure
  *or NULL if height or width is <= 0
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(width * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		arr[i] =  (int *)malloc(height * sizeof(int));
	for (i = 0; i < width; i++)
		for (j = 0; j <= height; j++)
			*(*(arr + i) + j) = 0;
	return (arr);
}
