#include "lists.h"

size_t print_listint(const listint_t *h);

/**
  *print_listint_safe - prints lidtint_t. prints list within a loop
  *@head: head list
  *
  *Return: number of nodes im the list or 98 on failure
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		print_listint(head);
		if (slow == fast)
		{
			count += print_listint(head);
		}
	}
	return (count);
}

/**
  *print_listint -  prints all elements of listint_t
  *@h: head link
  *
  *Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
