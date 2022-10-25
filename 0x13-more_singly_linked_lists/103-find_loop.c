#include "lists.h"

/**
  *find_listint_loop -  locates a loop in list
  *@head: head list
  *
  *Return: address of where the loop starts or NULL if no loop
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
		return (NULL);
	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != head)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
