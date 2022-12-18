#include "lists.h"

/**
  *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
  *@head: head pointer
  *@index: index of the node, starting from 0
  *
  *Return: NULL of node does not exist
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while((count < index) && (head != NULL))
	{
		head = head->next;
		count++;
	}
	return (head);
}
