#include "lists.h"

/**
  *add_nodeint - adds node at the beginning
  *@head: head list
  *@n: element to be added
  *
  *Return: the address of the new element, or NULL if it failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
