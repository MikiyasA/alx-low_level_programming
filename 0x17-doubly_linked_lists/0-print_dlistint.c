#include "lists.h"

/**
 * print_dlistint - print all element of list
 * @h: head of the list
 * Return: No. of node
 */

size_t print_dlistint(const dlistint_t *h)
{
int c;
c = 0;
while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
printf("%d\n", h->n);
c++;
h = h->next;
}
return (c);
}
