#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: pointer to the newely created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_table = (hash_table_t *) malloc(sizeof(hash_table_t));

    if (n_table == NULL)
    {
        free(n_table);
        return (NULL);
    }
	n_table->size = size;
	n_table->array = (hash_node_t **) calloc(size, sizeof(hash_node_t *));
	if (n_table->array == NULL)
	{
		free(n_table);
		return (NULL);
	}
	return (n_table);
}
