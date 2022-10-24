#include "lists.h"

/**
  *free_listint frees a listint_t list
  *@head: head list
  *
  *Return: nothing
  */

void free_listint(listint_t *head)
{
	listint_t *current;

	/**
	  *iterate through the entire node
	  *set head to the next node
	  *free current
	  */
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free (current);
	}
	free (head);
}
