#include "lists.h"

/**
  *print_dlistint - prints a double linked list
  *@h: the list
  *
  *Return: the number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
