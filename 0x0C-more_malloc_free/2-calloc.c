#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  *_calloc - allocates memory for an array and sets it to zero using malloc
  *@nmemb: elements of the array
  *@size: size
  *Return: pointer to the allocated memory
  *null if either size or nmemb is 0, and null on failure
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int nb;

	nb = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nb);
	if (p == NULL)
		return (NULL);
	memset(p, 0, nb);
	return (p);
}
