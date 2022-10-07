#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *_realloc - reallocates memory
  *@ptr: previois memerory allocated by malloc
  *@old_size: previous byte
  *@new_size: new size
  *
  *Return: null on failure, or if new size = 0 & ptr != null
  *a pointer to the new space
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int *newmem;

	newmem = malloc(new_size);
	if (newmem == NULL)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		memcpy(newmem, ptr, old_size);
		free(ptr);
	}
	return (newmem);
}
