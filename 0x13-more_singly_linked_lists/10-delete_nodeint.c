#include "lists.h"

/**
  *delete_nodeint_at_index - deletes node at index of listint_t
  *@head: head link
  *@index: the index node to be deleted
  *
  *Return: 1 on success or -1 on failure
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *to_delete, *temp;
	size_t i;

	if (*head == NULL)
		return (-1);
	to_delete = NULL;
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
	}
	to_delete = temp->next;
	temp->next = to_delete->next;
	free(to_delete);
	return (1);
}
