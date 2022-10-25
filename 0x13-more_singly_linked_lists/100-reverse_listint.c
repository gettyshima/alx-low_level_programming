#include "lists.h"

/**
  *reverse_listint - reverses a listint_t
  *@head: head pointer
  *
  *Return: pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = NULL, *temp2 = NULL;

	if (*head == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	while (*head != NULL && head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp1;
		temp1 = *head;
		*head = temp2;
	}
	*head = temp1;

	return (*head);
}
