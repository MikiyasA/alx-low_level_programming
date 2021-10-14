#include "lists.h"

/**
 * print_listint - print all element of list
 * @h: list element
 * Return: no. of node
 */

size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
