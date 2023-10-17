#include "hash_table.h"

/**
 * hash_table_create - create a hash table
 * @size: size of hash table
 *
 * Return: pointer to hash table or NULL
 * if it fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_ t *table;
	hash_node_t **array;
	unsigned long int i;

	/* allocate memory for table */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	/*allocate size for array */
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}
	/* assign hashtable with values */
	tabe->array = array;
	table->size = size;

	return (table);
}
