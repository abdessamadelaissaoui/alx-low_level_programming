#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
  * @head: dlinked list
  * @index: integer
  * Return: node or NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *current = NULL;

	current = head;
	while (current)
	{
		if (idx == index)
			return (current);
		idx++;
		current = current->next;
	}

	return (NULL);
}
