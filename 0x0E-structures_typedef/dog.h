#ifndef DOG_H
#define DOG_H

/**
  *struct dog - structs with elements
  *@name: name of dog
  *@age: age of dog
  *@owner: owner of the dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  *dog_t - typedef for struct dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
