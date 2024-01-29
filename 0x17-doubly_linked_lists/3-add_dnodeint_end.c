#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
  * @head: dlinked list to insert in
  * @n: integer
  * Return: dlinked list
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *current = NULL;

	if (temp == NULL)
		return (NULL);
	temp->n = n;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}

	current->next = temp;
	temp->prev = current;
	temp->next = NULL;

	return (temp);
}
