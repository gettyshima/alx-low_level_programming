#include "lists.h"

/**
  *free_listint2 - frees a listint_t list and sets head to NULL
  *@head: head list
  *
  *Return: nothing
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;
	
	temp2 = *head;
	while (temp2 != NULL && head != NULL)
	{
		temp = temp2;
		temp2 = temp2->next;
		free(temp);
	}
	*head = NULL;
}
