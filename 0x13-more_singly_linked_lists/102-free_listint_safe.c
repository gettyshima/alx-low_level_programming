#include "lists.h"

/**
  *print_listint_safe - prints lidtint_t. prints list within a loop
  *@head: head list
  *
  *Return: number of nodes im the list or 98 on failure
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
