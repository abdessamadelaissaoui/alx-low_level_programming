#include "lists.h"

/**
  * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
  * @head: dlinked list
  * Return: integer
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = NULL;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
