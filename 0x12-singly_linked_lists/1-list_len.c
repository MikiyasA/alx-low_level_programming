#include "lists.h"

/**
 * list_len - number of elements in linked list_t
 * @h: elements
 * Return: no. of elemenets
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}

return (count);
}
