#include "lists.h"

/**
  *dlistint_t *add_dnodeint(dlistint_t **head, const int n); - adds anew node at the beginning
  *@head: head pointsr
  *@n: the element
  *
  *Return: pointer to new node or NULL on failure
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	(*head)->prev = new_node;
	(*head) = new_node;
	
	return (*head);
}
