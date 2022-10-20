#include "lists.h"

/**
  *free_list - frees a linked list
  *@head: the link
  *
  *Return: nothing
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
