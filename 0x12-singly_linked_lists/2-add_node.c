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

