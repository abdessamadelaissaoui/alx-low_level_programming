#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **x, unsigned int idx, int n)
{
	unsigned int len = 0, index = 0;
	dlistint_t *current = NULL;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;
	current = *x;
	if (current == NULL)
	{
		*x = temp;
		return (*x);
	}
	if (idx == 0)
	{
		temp->next = current;
		current->prev = temp;
		*x = temp;
		return (temp);
	}
	while (current)
	{
		len++;
		current = current->next;
	}
	current = *x;
	if (idx == len)
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = temp;
		temp->prev = current;
		return (temp);
	}
	while (current)
	{
		if (index == idx)
		{
			temp->next = current;
			temp->prev = current->prev;
			current->prev->next = temp;
			current->prev = temp;
			return (temp);
		}
		index++;
		current = current->next;
	}
	free(temp);
	return (NULL);
}
