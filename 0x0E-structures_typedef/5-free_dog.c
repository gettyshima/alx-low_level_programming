#include "dog.h"
#include <stdlib.h>

/**
  *free_dog - frees dog
  *@d: thee dog
  *Return: nothing
  */

void free_dog(dog_t *d)
{
	if (!(d == NULL))
	{
		free(d);
	}
}
