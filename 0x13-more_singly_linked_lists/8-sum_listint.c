#include "lists.h"

/**
  *sum_listint - returns the sum of all the data (n) of a listint_t linked list
  *@head: head list
  *
  *Return: returns the sum of all data(n)
  *or null if the node does not exist
  */

int sum_listint(listint_t *head)
{
	int total_node = 0;
	listint_t *node;

	if (head == NULL)
		return (0);
	node = head;
	while (node != NULL)
	{
		total_node += node->n;
		node = node->next;
	}
	return (total_node);
}
