#include "dog.h"
#include <stdio.h>

/**
  *print_dog - prints struct dog
  *@d: the name of the struct to be printed
  *
  *Return: nothing
  */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
