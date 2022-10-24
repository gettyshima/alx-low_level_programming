#include "lists.h"

/**
  *listint_t *add_nodeint_end(listint_t **head, const int n);
  *@head: head list
  *@n: the member
  *
  *Return: the address of the new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr1, *ptr2;

	ptr1 = malloc(sizeof(listint_t));
	if (ptr1 == NULL)
		return (NULL);
	ptr1->n = n;
	ptr1->next = NULL;
	if (*head == NULL)
	{
		*head = ptr1;
		return (ptr1);
	}

	ptr2 = *head;
	while (ptr2->next)
		ptr2 = ptr2->next;
	ptr2->next = ptr1;

	return (ptr1);
}
		
