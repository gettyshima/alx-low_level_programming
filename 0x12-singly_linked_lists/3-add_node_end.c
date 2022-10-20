#include "lists.h"

/**
  *add_node_end - adds a new node at the end of a list_t
  *@head: head pointer
  *@str: string to be added
  *
  *Return: address of new element or NULL on failure
  */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *ptr = malloc(sizeof(list_t));
	list_t *ptr1;

	if (ptr == NULL)
		return (NULL);
	dup = strdup(str);
	ptr->len = strlen(str);
	ptr->str = dup;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	ptr1 = *head;
	while (ptr1->next)
		ptr1 = ptr1->next;
	ptr1->next = ptr;
	return (ptr);
}
