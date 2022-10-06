#include "main.h"

/**
  *malloc_checked - allocates memory using malloc
  *@b: size to allocate
  *
  *Return: pointer to allocated memory, and exit starus of 98 if failed
  */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
