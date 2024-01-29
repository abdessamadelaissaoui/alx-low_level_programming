#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes the node at index
  * @head: dlinked list
  * @index: positive integer
  * Return: integer
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0, len = 0;
	dlistint_t *current = NULL;

	current = *head;
	if (index == 0)
	{
		if (current == NULL)
			return (-1);
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current)
	{
		len++;
		current = current->next;
	}

	current = *head;
	if (index == len - 1)
	{
		if (current == NULL)
			return (-1);
		while (current->next)
			current = current->next;
		current->prev->next = NULL;
		free(current);
		return (1);
	}

	while (current)
	{
		if (index == idx)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		idx++;
		current = current->next;
	}
	*head = NULL;
	return (-1);
}
