#include "lists.h"

/**
  *insert_nodeint_at_index- inserts a new node at a given position
  *@head: head list
  *@idx: index of the list where the new node should be added
  *@n: the member
  *
  *Return: address of the new node, or NULL if it failed
  *or if it is not possible to add the new node at index
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	size_t i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	temp = *head;
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (*head == NULL || (*head)->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
