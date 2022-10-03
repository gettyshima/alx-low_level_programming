#include "main.h"
#include <stdlib.h>

/**
  *free_grid - frees memory from previous array
  *@grid: pointer to the array
  *@height: the height
  *
  *Return: 0 success
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0;  i < height; i++)
		free(grid[i]);
	free(grid);
}
