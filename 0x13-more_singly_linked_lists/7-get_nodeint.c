#include "lists.h"

/**
  *count_node counts the number of nodes
  *@h: head pointer
  *
  *Return: the count
  */

size_t count_node(listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

/**
  *get_nodeint_at_index - returns the nth node of listint_t
  *head: head list
  *@index: index of the node starting at 0
  *
  *Return: returns the nth node
  *or null if the node does not exist
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t total_node = 0, count = 0;
	listint_t *node;

	total_node = count_node(head);
	if (index > total_node)
		return (NULL);
	node = head;
	while (head != NULL)
	{
		if (count == index)
			break;
		node = node->next;
		count++;
	}
	return (node);
}
