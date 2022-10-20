#include "lists.h"

/**
  *add_node - adds a new node at the begining of a list_t
  *@head: head pointer
  *@str: string to be added
  *
  *Return: address of new element or NULL on failure
  */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	dup = strdup(str);
	ptr->len = strlen(str);
	ptr->str = dup;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
