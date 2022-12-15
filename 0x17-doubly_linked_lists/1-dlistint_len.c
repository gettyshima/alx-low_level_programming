#include "lists.h"

/**
  *dlistint_len - returns the number of elements in a linked dlistint_t list.
  *@h: the list
  *
  *Return: number of elments
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
		num++;
	return (num);
}
