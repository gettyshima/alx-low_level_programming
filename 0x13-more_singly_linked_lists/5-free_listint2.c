#include "lists.h"

/**
  *void free_listint2(listint_t **head);
  *@head: head lost
  *free_listint2 - frees a listint_t list and sets head to NULL
  *@head: head list
  *
  *Return: nothing
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
