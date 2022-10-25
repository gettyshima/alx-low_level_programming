#include "lists.h"

/**
  *pop_listint - deletes head node of listint_t
  *@head: head list
  *
  *Return: head node’s data (n)
  *or 0 of list is empty
  */

int pop_listint(listint_t **head)
{
	listint_t *to_delete;
	int new_n;

	if (*head == NULL)
		return (0);
	to_delete = *head;
	*head = (*head)->next;
	new_n = to_delete->n;
	free(to_delete);

	return (new_n);
}
