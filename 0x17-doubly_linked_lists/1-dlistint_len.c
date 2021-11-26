#include "lists.h"

/**
 * dlistint_len - cont No. of element in dlist
 * @h: head of the list
 * Return: No. of element
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
int c;
c = 0;

while (h != NULL)
{
c++;
h = h->next;
}
return (c);
}
