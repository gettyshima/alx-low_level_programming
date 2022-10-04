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
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] =  (int *)malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
			*(*(arr + i) + j) = 0;
		if (arr == NULL)
		{
			for (; i < width; i++)
				free(arr[i]);
			free(arr);
		}
	}
	return (arr);
}
