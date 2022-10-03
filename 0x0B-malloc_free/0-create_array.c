#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of character
  *and initializes them with specific character
  *@size: size of array
  *@c: the character
  *
  *Return: NULL if size is 0 or fails to allocate
  *pointer to the array
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
