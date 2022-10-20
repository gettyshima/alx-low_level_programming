#include "lists.h"

/**
  *list_len - returns the number of element in a linked list
  *@h: the list
  *
  *Return: the number of elements
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;

	}
	return (count);
}
