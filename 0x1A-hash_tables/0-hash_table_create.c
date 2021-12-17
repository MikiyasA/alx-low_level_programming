#include "hash_tables.h"

/**
 *
 *
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
  hash_table_t *table;
  hash_node_t **arry;
  unsigned long int i;

  table = malloc(sizeof(hash_table_t));
  if (table == NULL)
    return (NULL);
 
  arry = malloc(sizeof(hash_node_t *) * size);
  if (arry == NULL)
    return (NULL);
  
  for (i = 0; i < size; i++)
    arry[i] = NULL;
  
  table->array = arry;
  table->size = size;

  return (table);
}
