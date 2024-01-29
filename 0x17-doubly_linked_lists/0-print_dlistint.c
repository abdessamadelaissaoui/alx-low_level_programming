#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlinked list
 * @x: the dlinked list to print
 * Return: lenght of the dlinked list
 */
size_t print_dlistint(const dlistint_t *x)
{
	int len = 0;

	while (x)
	{
		printf("%d\n", x->n);
		x = x->next;
		len++;
	}
	return (len);
}
