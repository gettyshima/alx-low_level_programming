#include "dog.h"

/**
  *init_dog - initializes the struct dog
  *@d: name of struct
  *@name: name of member
  *@age: age of member
  *@owner: owner of member
  *
  *Return: nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
