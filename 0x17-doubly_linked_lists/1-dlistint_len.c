#include "lists.h"

/**
  * dlistint_len - returns the number of elements in a linked dlistint_t list.
  * @x: dlinked list
  * Return: integer
  */
size_t dlistint_len(const dlistint_t *x)
{
	int len = 0;

	while (x)
	{
		len++;
		x = x->next;
	}
	return (len);
}
