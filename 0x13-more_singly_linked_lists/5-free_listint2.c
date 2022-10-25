#include "lists.h"

/**
  *free_listint2 - frees a listint_t list and sets head to NULL
  *@head: head list
  *
  *Return: nothing
  */

void free_listint2(listint_t **head)
{
	listint_t *current;

	/**
	  *iterate through the entire node
	  *set head to the next node
	  *free current
	  */
	while (*head != NULL && head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
