#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list.
  * @head: dlinked list to insert in
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev = NULL;

	while (head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
