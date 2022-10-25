#include "lists.h"

/**
  *free_listint2 - frees a listint_t list and sets head to NULL
  *@head: head list
  *
  *Return: nothing
  */

void free_listint2(listint_t **head)
{
	listint_t *current, *node;

	/**
	  *iterate through the entire node
	  *set head to the next node
	  *free current
	  */
	current = *head;
	while (current)
	{
		node = current->next;
		free(current);
		current = node;
	}
	*head = NULL;
}
