#include "lists.h"

/**
 * pop_listint - deletes the head node of a
 * @head: head of list
 * Return: result
 *
 */

int pop_listint(listint_t **head)
{
int result;
listint_t *h, *c;

if (*head == NULL)
return (0);

c = *head;
result = c->n;

h = c->next;

free(c);

*head = h;

return (result);
}
