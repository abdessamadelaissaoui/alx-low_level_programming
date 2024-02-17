#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	int flag = 0;
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("\'%s\': \'%s\'", node->key, node->value);
			node = node->next;
			if (node != NULL)
				printf(", ");
			flag = 1;
		}
		if (ht->array[i + 1] != NULL && flag == 1)
			printf(", ");
	}
	printf("}\n");
}
