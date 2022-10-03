#include "main.h"
#include <stdlib.h>

/**
  *_strdup - copies a string given as a parameter i.e duplicates a string
  *@str: the string
  *
  *Return: pointer to the newly allocated space
  *NULL if indufficient memory
  */

char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *arr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len += 1;
	arr = malloc(len * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		arr[i] = str[i];
	return (arr);
}
