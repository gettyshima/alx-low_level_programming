#include "lists.h"

/**
  *sum_dlistint - suma all data(n) of dlistint
  *@head: head pointer
  *
  *Return: the sum or 0 if empty
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
